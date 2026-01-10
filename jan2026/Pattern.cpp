#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    //first
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<"\n";

    //middle
    for(int i=1;i<=n-2;i++){
        for(int j=1; j <=n-i-1;j++){
            cout<<" ";
        }
        cout<<"*"<<"\n";
    }


    //second
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<"\n";
    return 0;
}