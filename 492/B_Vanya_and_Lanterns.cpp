#include<bits/stdc++.h>
using namespace std;


int main(){
    int n=0,l=0;
    long double r=0,tR=0;
    cout<<fixed<<setprecision(10);
    cin>>n>>l;
    long double pos[n];
    for(int i=0;i<n;i++)
        cin>>pos[i];
    sort(pos,pos+n);

    //for(int i=0;i<n;i++)
    //    cout<<pos[i]<<" ";
    //cout<<"\n";

    r=pos[0];
    

    for(int i=1;i<n;i++){
        tR = (pos[i] - pos[i-1])/2.0;
        //cout<<tR<<" ";
        r=max(r, tR );
    }
    tR = (l - pos[n-1]);
    r=max(r, tR );

    
    
    cout<<r;


    return(0);
}