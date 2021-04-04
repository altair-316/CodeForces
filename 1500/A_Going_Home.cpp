#include<bits/stdc++.h>
using namespace std;

/*
bool check(unordered_multimap<int,pair<int,int>> &mMap, int key){
    bool ans=0;
    //cout<<"\n"<<key;

    unordered_multimap<int,pair<int,int>>::iterator itp,it;
    auto j=mMap.equal_range(key);
    itp=j.first;
    it=j.first;
    it++;

    for(it=it;it!=j.second;it++){
        if(it->second.first!=itp->second.first   &&   it->second.first!=itp->second.second  &&  it->second.second!=itp->second.first   &&   it->second.second!=itp->second.second ){
            cout<<"YES\n";
            cout<<it->second.first<<" "<<it->second.second<<" "<<itp->second.first<<" "<<itp->second.second;
            ans=1;    
        }

    }


    return(ans);
}
*/

int main(){
    unordered_multimap<int,pair<int,int>> mMap;
    unordered_multimap<int,pair<int,int>>::iterator it;
    int n=0;
    cin>>n;
    int a[n]={0};
    for(int i=0;i<n; i++)
        cin>>a[i];

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            it=mMap.find((a[i]+a[j]));
            if( it != mMap.end()  ){
                if(  it->second.first!=(i+1)   &&   it->second.first!=(j+1)  &&  it->second.second!=(i+1)   &&   it->second.second!=(j+1)     ){
                    mMap.insert(   pair<int,pair<int,int>>     (     (a[i]+a[j]),pair<int,int>(i+1,j+1)  )           );
                    cout<<"YES\n";
                    cout<<it->second.first<<" "<<it->second.second<<" "<<i+1<<" "<<j+1;
                    return(0);
                    }
            }
            else
                mMap.insert(   pair<int,pair<int,int>>     (     (a[i]+a[j]),pair<int,int>(i+1,j+1)  )           );

        }
    }
    /*
    int x=0,ans=0;
    for(auto i:mMap){
        if(mMap.count(i.first) > 1){
            ans=check(mMap,i.first);
            if(ans==1)
                break;
        }
    }
    
    if(ans!=1){
        cout<<"NO";
    }
    */
   cout<<"NO";
    

    

    return(0);
}