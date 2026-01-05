#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int ans = n;
    string t[n];
    for(int i=0;i<n;i++){
        cin>>t[i];
        if(t[i] != t[0]){
            ans--;
        }
    }
    cout<< ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}