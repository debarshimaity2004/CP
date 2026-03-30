#include<bits/stdc++.h>
using namespace std;
#define int long long



void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int maxa = 1e6;

    vector<int> freq(maxa + 1, 0);

    for(int i = 0; i < n; i++){
        cin >> a[i];
        freq[a[i]]++;
    }

    vector<bool> bad(maxa + 1, false);

    // seive
    for(int x = 1; x <= maxa; x++){
        if(freq[x] > 0){
            for(int i = 2 * x; i <= maxa; i += x){
                if(freq[i] > 0){
                    bad[i] = true;
                }
            }
        }
    }

    int ans = 0;

    for(int x = 1; x <= maxa; x++){
        if(freq[x] == 1 && !bad[x]){
            ans++;
        }
    }

    cout << ans << "\n";
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