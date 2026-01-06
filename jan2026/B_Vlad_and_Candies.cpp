#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);

    if(n==1){
        if(a[0]>1){
            cout<<"NO"<<'\n';
            return;
        }
        else{
            cout<<"YES"<<'\n';
            return;
        }
    }

    if(a[n-1] - a[n-2] > 1){
        cout<<"NO"<<'\n';
        return;
    }
    else{
        cout<<"YES"<<'\n';
        return;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}