#include<bits/stdc++.h>
using namespace std;
#define int long long



void solve(){
    int l , r;
    cin >> l >> r;

    if(r - l >= 2019) cout << 0 <<'\n';
    else{
        int m = 2018;
        for(int i = l;i < r;i++){
            for(int j = i + 1;j <= r;j++){
                m = min(m,(i % 2019 * j % 2019) % 2019);
            }
        }
        cout << m <<'\n';
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