#include<bits/stdc++.h>
using namespace std;
#define int long long

int mod = 1e9;

void solve(){
    int n;
    cin >> n;

    vector<long long> row(n+1, 0);
    row[0] = 1;

    for(int i = 1; i <= n; i++){
        for(int j = i; j >= 1; j--){
            row[j] = (row[j] + row[j-1]) % mod;
        }
    }

    for(int i = 0; i <= n; i++){
        cout << row[i] << " ";
    }
    cout << "\n";
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}