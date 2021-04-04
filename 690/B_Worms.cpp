#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0,a=1,m=0,x=1;
    cin>>n;
    int piles[n];
    multimap<int,int> ans;
    for(int i=0;i<n;i++){
        cin>>piles[i];
        int j=0;
        for(j=0;j<piles[i];j++)
            ans.insert(pair<int,int>(j+x,i+1));
        x=x+j;
    }
    cin>>m;
    int worms[m];
    for(int i=0;i<m;i++){
        cin>>worms[i];
    }
    for(int i=0;i<m;i++){
        map<int,int>::iterator it;
        it=ans.find(worms[i]);
        cout<<it->second<<endl;
    }

        
/*
    cout<<endl<<endl;
    for(auto i:ans){
        cout<<i.first<<","<<i.second<<endl;
    }
*/


    return(0);
}