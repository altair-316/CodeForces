#include<bits/stdc++.h>
using namespace std;


int main(){
    int head=0, nL=0,emps=0;

    cin>>nL;
    vector<pair<int,int>> links;
    vector<set<int>> salSup(nL);
    set<int> tempS;
    map<int,int> sal;

    for(int i=0;i<nL;i++){
        for(int j=0;j<nL;j++){
            
            int temp=0;
            cin>>temp;
            tempS.insert(temp);
            if(i==j){
                sal.insert(pair<int,int>(i,temp));
                continue;
            }
            salSup[i].insert(temp);
        }
    }
    sort(salSup.begin(),salSup.end());
/*
    for(int i=0;i<nL;i++){
        for( auto j:salSup[i] ){
            cout<<j<<"\t";
        }
        cout<<"\n";
    }
*/
    emps=tempS.size();

    int k=nL;
    int i=0;
    while(links.size()<emps-1)
    {
        links.push_back(pair<int,int>(i+1,k+1));
        int j=i+1;
        while(salSup[i]==salSup[j]){
            links.push_back(pair<int,int>(j+1,k+1));
            j+=1;
        }
        set<int> tSet=salSup[i];
        if(sal.find(*tSet.begin())==sal.end()){
            sal.insert(pair<int,int>(k,*tSet.begin()));
        }
        tSet.erase(tSet.begin());
        salSup.push_back(tSet);
        i=j;
        if(tSet.empty())
            head=k+1;
        k+=1;
        
    }

    cout<<emps<<endl;
    for( auto j:sal ){
        cout<<j.second<<" ";
    }
    cout<<"\n"<<head;
    for( auto j:links ){
        cout<<"\n"<<j.first<<" "<<j.second;
    }







    return(0);
}