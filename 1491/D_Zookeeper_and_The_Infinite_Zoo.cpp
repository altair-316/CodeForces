#include<bits/stdc++.h>
using namespace std;

//void bfs(int src, vector<set<int>> &qAns,vector<vector<int>> &zoo){
void bfs(int src, map<int,set<int>> &qAns,map<int,set<int>> &zoo){
    queue<int> q;
    q.push(src);

    while(!q.empty()){
        int v=q.front();
        q.pop();
        qAns[src].insert(v);
        for(auto i:zoo[v]){
            if (qAns[src].find(i) == qAns[src].end()) {
                q.push(i);
            }
        }
    }

}


//bool qCheck(int src,int dst , vector<set<int>> &qAns,vector<vector<int>> &zoo){
bool qCheck(int src,int dst , map<int,set<int>> &qAns,map<int,set<int>> &zoo){
    qAns[src].insert(0);
    bfs(src,qAns,zoo);
    if(qAns[src].find(dst)!=qAns[src].end())
        return(1);
    return(0);
}

int main(){
    int q=0,u=0,v=0,n=0,t=0,s=0;
    vector<pair<int,int>> queries;
//    set<int> vertices;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>u>>v;
        if(i==0)
            s=u;
        else
            s=min(s,min(u,v));
        n=max(n,max(u,v));
//        vertices.insert(u);
//        vertices.insert(v);
        queries.push_back(pair<int,int>(u,v));
    }

    

//    n=*vertices.rbegin();
//    cout<<n<<endl;
//    vector<int> temp;
    //vector<vector<int>> zoo(n+1);
    map<int,set<int>> zoo;
    map<int,set<int>>::iterator it;


    for(int i=s;i<=n;i++){
        for(int j=s;j<n;j++){
            t=i&j;
            if(t==j && j+i<=n){
                it=zoo.find(i);
                if(it!=zoo.end()){
                    zoo[i].insert(j+i);
                }
                else if(it==zoo.end()){
                    set<int> temp;
                    temp.insert(j+i);
                    zoo.insert(pair<int,set<int>>(i,temp));
                }
            }
        }
    }
/*
    cout<<"\n####ZOO###"<<endl;
    for(auto i:zoo){
        for(auto j:i.second){
            cout<<j<<",";
        }
        cout<<endl;
    }
    cout<<"####ZOO###"<<endl<<endl;
*/
    bool ans=0;
//    vector<set<int>> qAns(n+1);
    map<int,set<int>> qAns;
    for(auto i:queries){
        if(i.first>i.second){
            cout<<"\nNO";
            continue;
        }
        it=qAns.find(i.first);
//        if(qAns[i.first].empty()){
        if(it==qAns.end()){
            ans=qCheck(i.first,i.second,qAns,zoo);
        }
        else{
            if(qAns[i.first].find(i.second)!=qAns[i.first].end())
                ans=1;
            else
                ans=0;
        }

        if(ans==1)
            cout<<"\nYES";
        if(ans==0)
            cout<<"\nNO";
    }
/*
    for(auto i:qAns){
        for(auto j:i){
            cout<<j<<",";
        }
        cout<<endl;
    }
*/

//for(long int i=0;i<100000;i++)
//    cout<<i<<" "<<i+1<<endl;

    return(0);
}