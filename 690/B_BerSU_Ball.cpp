#include<bits/stdc++.h>
using namespace std;


int main(){
    int p=0,b=0;
    cin>>b;
    int boys[b];
    for(int i=0;i<b;i++)
        cin>>boys[i];
    sort(&boys[0],&boys[b-1]);

    int g=0;
    cin>>g;
    int girls[g];
    for(int i=0;i<g;i++)
        cin>>girls[i];
    sort(&girls[0],&girls[g-1]);

    map<int,int> skill;
    
    if(b>=g){
        for(auto i:boys){
            if(skill.find(i)==skill.end()){
                skill.insert(pair<int,int>(i,1));
            }
            else{
                skill.find(i)->second+=1;
            }
        }
        for(auto i:girls){
            if(skill.find(i)!=skill.end()  &&  skill.find(i)->second>0){
                p+=1;
                skill.find(i)->second-=1;
            }
            else if(skill.find(i-1)!=skill.end() &&  skill.find(i-1)->second>0  ){
                p+=1;
                skill.find(i-1)->second-=1;
            }
            else if(skill.find(i+1)!=skill.end() &&  skill.find(i+1)->second>0  ){
                p+=1;
                skill.find(i+1)->second-=1;
            }
        }

    }
    else{
        for(auto i:girls){
            if(skill.find(i)==skill.end()){
                skill.insert(pair<int,int>(i,1));
            }
            else{
                skill.find(i)->second+=1;
            }
        }
        
        for(auto i:boys){
            if(skill.find(i)!=skill.end()  &&  skill.find(i)->second>0){
                p+=1;
                skill.find(i)->second-=1;
            }
            else if(skill.find(i-1)!=skill.end()  &&  skill.find(i-1)->second>0){
                p+=1;
                skill.find(i-1)->second-=1;
            }
            else if(skill.find(i+1)!=skill.end()  &&  skill.find(i+1)->second>0){
                p+=1;
                skill.find(i+1)->second-=1;
            }

        }
        
    }

    
    cout<<p;

    return(0);
}