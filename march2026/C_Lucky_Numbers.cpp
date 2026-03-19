#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    long long ans = 0;
    long long cur = 1;

    for(int i = 1; i <= n; i++){
        cur *= 2;
        ans += cur;
    }

    cout << ans <<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}