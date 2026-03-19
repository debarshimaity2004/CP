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

int inverse(int x) {
    return binpow(x, mod - 2);
}

int fact[1000100];

void precompute() {
    fact[0] = 1;
    for(int i = 1; i <= 1000000; i++) {
        fact[i] = (fact[i-1] * i) % mod;
    }
}

int ncr_fact(int n, int r) {
    if(r > n) return 0;   

    int num = fact[n];
    int den = (fact[n-r] * fact[r]) % mod;

    return (num * inverse(den)) % mod;
}

void solve(){
    int a, b;
    cin >> a >> b;

    cout << ncr_fact(a, b) << '\n';
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    precompute();

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}