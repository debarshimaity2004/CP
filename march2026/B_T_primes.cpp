#include<bits/stdc++.h>
using namespace std;
#define int long long

const int MAX = 1000000;
bool isPrime[MAX + 1];

void sieve(){
    fill(isPrime, isPrime + MAX + 1, true);
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i * i <= MAX; i++){
        if(isPrime[i]){
            for(int j = i * i; j <= MAX; j += i){
                isPrime[j] = false;
            }
        }
    }
}

void solve(){
    int n; cin >> n;

    while(n--){
        int x; cin >> x;

        int root = sqrt(x);

        if(root * root == x && isPrime[root])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    sieve();  
    solve();
}