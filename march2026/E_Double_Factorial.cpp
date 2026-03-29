#include<bits/stdc++.h>
using namespace std;
#define int long long



void solve(){
    int n;
    cin >> n;
    if(n % 2) cout << 0 <<'\n';
    else{
        int k = n / 2;
        int ans = 0;

        while (k) {
            k /= 5;
            ans += k;
        }
        cout << ans << "\n";
    }
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