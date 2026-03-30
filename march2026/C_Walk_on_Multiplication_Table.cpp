#include<bits/stdc++.h>
using namespace std;
#define int long long



void solve(){
    int n;
    cin >> n;
    int ans = LLONG_MAX;
    for(int i = 1;i * i <= n;i++){
        if(n % i == 0){
            int j = n / i ;
            ans = min(ans, i + j - 2);
        }
    }

    cout << ans << '\n';
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}