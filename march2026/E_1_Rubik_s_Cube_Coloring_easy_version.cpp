#include<bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9 + 7;

int binpow(int a, int b, int mod) {
    if(b == 0) return 1;
    if(b % 2 == 1) return (a * binpow(a, b-1, mod)) % mod;
    int x = binpow(a, b/2, mod);
    return (x * x) % mod;
}

void solve(){
    int k; cin >> k;

    int exp = (binpow(2, k+1, mod-1) - 3 + (mod-1)) % (mod-1);

    int ans = 3 * binpow(2, exp, mod) % mod;

    cout << ans << '\n';
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}