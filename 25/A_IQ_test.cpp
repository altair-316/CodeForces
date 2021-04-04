#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0,x=0;
    cin>>n;
    int ans[n]={0};
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    
    
    
    for(int j=1;j<(n-1);j++){
//        cout<<ans[j-1]<<","<<ans[j]<<","<<ans[j+1];
        if(ans[j]%2 != ans[j-1]%2 && ans[j]%2 != ans[j+1]%2){
            cout<<j+1;
            return(0);
        }
        cout<<endl;
    }

    if(ans[0]%2 != ans[1]%2 && ans[0]%2 != ans[2]%2)
        cout<<1;
    else if(ans[n-1]%2 != ans[n-2]%2 && ans[n-1]%2 != ans[n-3]%2)
        cout<<n;


    return(0);
}