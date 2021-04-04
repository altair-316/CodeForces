#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    string name;
    cin>>n;
    map<string,int> uNames;
    for(int i=0;i<n;i++){
        cin>>name;
        if(uNames.find(name)==uNames.end()){
            uNames.insert(pair<string,int>(name,1));
            cout<<"OK"<<endl;
        }
        else{
            cout<<name+to_string(uNames.find(name)->second)<<endl;
            uNames.insert(pair<string,int>(name+to_string(uNames.find(name)->second),1));
            uNames.find(name)->second+=1;
            
        }
    }



    return(0);
}