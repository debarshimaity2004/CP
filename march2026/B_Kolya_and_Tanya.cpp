#include<bits/stdc++.h>
using namespace std;
#define int long long

int mod = 1e9 + 7;

int binpow(int a, int b) {
    if(b == 0) return 1;
    if(b % 2 == 1) return (a * binpow(a, b-1)) % mod;
    int x = binpow(a, b/2);
    return (x * x) % mod;
}


void solve(){
    int n;
    cin >> n;

    int total = binpow(3, 3*n);
    int bad = binpow(7, n);

    int ans = (total - bad + mod) % mod;

    cout << ans << '\n';
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}