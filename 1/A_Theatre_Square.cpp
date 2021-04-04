#include<bits/stdc++.h>
using namespace std;

int main(){
    long long m=0,n=0,a=0,t1=0,t2=0;
    double temp;

    cin>>m>>n>>a;



    temp=(float(m)/float(a));
    t1=ceil(temp);

    temp=(float(n)/float(a));
    t2=ceil(temp);
    cout<<t1*t2;

    return(0);
}