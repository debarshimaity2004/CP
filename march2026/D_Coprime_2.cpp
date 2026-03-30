#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 100000;

vector<int> spf(MAX + 1);

void pre(){
    for(int i = 1; i <= MAX; i++) spf[i] = i;

    for(int i = 2; i * i <= MAX; i++){
        if(spf[i] == i){ 
            for(int j = i * i; j <= MAX; j += i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }
}

vector<int> get_primes(int x){
    vector<int> primes;
    while(x > 1){
        int p = spf[x];
        primes.push_back(p);
        while(x % p == 0) x /= p;
    }
    return primes;
}

void solve(){
    int n , m;
    cin >> n >> m;
    vector<int>a(n);
    for(int i = 0;i < n;i++) cin >> a[i];

    vector<bool> bad_prime(MAX + 1, false);

    // bad primes
    for(int i = 0; i < n; i++){
        vector<int> primes = get_primes(a[i]);
        for(int p : primes){
            bad_prime[p] = true;
        }
    }

    // valid k
    vector<bool> ok(m + 1, true);
    ok[0] = false;

    for(int p = 2; p <= MAX; p++){
        if(bad_prime[p]){
            for(int j = p; j <= m; j += p){
                ok[j] = false;
            }
        }
    }

    vector<int> ans;
    for(int i = 1; i <= m; i++){
        if(ok[i]) ans.push_back(i);
    }

    cout << ans.size() << "\n";
    for(int x : ans) cout << x << "\n";
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    pre();

    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}