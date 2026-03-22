#include<bits/stdc++.h>
using namespace std;
#define int long long

int der[1000001];
int MOD = 1e9 + 7;

void compute_derangements(int N, int MOD) {
    der[1] = 0, der[2] = 1;
    for (int i = 3; i <= N; i++) {
        der[i] = ((i - 1) * (der[i - 1] + der[i - 2])) % MOD;
    }
}

void solve(){
    int n; cin >> n;
    compute_derangements(n, MOD);
    cout << der[n] << '\n';
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