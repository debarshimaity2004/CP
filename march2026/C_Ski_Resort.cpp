#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k ,q; cin >> n >> k >> q;
    vector<int> a(n); 
    for(int i = 0;i < n;i++)  cin >> a[i];

    int ans = 0;
    int len = 0;

    for(int i = 0; i < n; i++){
        if(a[i] <= q){
            len++;
        } else {
            if(len >= k){
                int x = len - k + 1;
                ans += (x * (x + 1)) / 2;
            }
            len = 0;
        }
    }

    // last segment
    if(len >= k){
        int x = len - k + 1;
        ans += (x * (x + 1)) / 2;
    }

    cout << ans << '\n';
}    

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}