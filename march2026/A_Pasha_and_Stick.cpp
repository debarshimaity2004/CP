#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin >> n;
    if(n % 2 == 1){
        cout << 0;
    }
    else{
        int ans = n / 4;
        if(n % 4 == 0) ans--;
        cout << ans;
    }

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