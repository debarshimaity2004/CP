#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    int ans = 1;
    for(int i = 0;i < n;i++){
        ans = (ans * 2) % mod;
    }

    cout << ((ans % mod) + mod) % mod;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}