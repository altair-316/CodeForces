#include<bits/stdc++.h>
using namespace std;
/*
n= number of rides
m= number of rides in mticket
a= cost of 1 ride ticket
b= cost of m ride ticket
*/


int main(){
    int m=0,n=0,a=0,b=0,t=0;
    cin>>n>>m>>a>>b;

    //if m ride ticket is usefull    
    if(m*a < b){
        cout<<a*n;
        return(0);
    }

    while(n>=m){
        t+=b;
        n-=m;
    }

    if(b<n*a)
        t+=b;
    else
        t+=n*a;
    cout<<t;




    return(0);
}