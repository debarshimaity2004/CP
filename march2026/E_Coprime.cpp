#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 1e6;

int spf[MAX + 1];

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

void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0;i < n;i++) cin >> a[i];

    int g = a[0];
    for(int i = 1; i < n; i++){
        g = __gcd(g, a[i]);
    }

    if(g != 1){
        cout << "not coprime\n";
        return;
    }

    // pairwise
    vector<bool> used(MAX + 1, false);
    bool pairwise = true;

    for(int i = 0; i < n; i++){
        int x = a[i];
        set<int> primes;

        while(x > 1){
            int p = spf[x];
            primes.insert(p);
            while(x % p == 0) x /= p;
        }

        for(int p : primes){
            if(used[p]){
                pairwise = false;
            }
            used[p] = true;
        }
    }

    if(pairwise){
        cout << "pairwise coprime\n";
    }
    else{
        cout << "setwise coprime\n";
    }
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