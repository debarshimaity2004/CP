#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    char s;
    cin>>a>>s>>b;
    if(s=='>'){
        if(a>b){
            cout<<"Right"<<endl;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }
    else if(s=='<'){
        if(a<b){
            cout<<"Right"<<endl;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }
    else if(s=='='){
        if(a==b){
            cout<<"Right"<<endl;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }
}
