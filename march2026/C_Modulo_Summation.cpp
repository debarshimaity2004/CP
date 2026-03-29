#include<bits/stdc++.h>
using namespace std;
#define int long long



void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0;i < n;i++) cin >>a[i];

    int sum = 0;
    for(int i = 0;i < n;i++) sum += a[i];

    cout << sum - n << '\n';
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