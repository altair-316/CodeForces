#include<bits/stdc++.h>
using namespace std;

//  "A", "O", "Y", "E", "U", "I"
int main(){

    set<char> vow;
    string in,op="";
    char dot='.';
    vow.insert('a');
    vow.insert('o');
    vow.insert('y');
    vow.insert('e');
    vow.insert('u');
    vow.insert('i');

    cin>>in;
    for(auto i:in){
        if(int(i)<=90)
            i+=' ';
        //cout<<i<<"\t";
        if(vow.find(i)==vow.end()){
            op+=dot;
            op+=i;
        }
    }
    cout<<op;



    return(0);
}