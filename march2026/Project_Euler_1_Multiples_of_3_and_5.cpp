#include<bits/stdc++.h>
using namespace std;
#define int long long

int sum(int k, int n){
    int x = (n - 1) / k;
    return k * x * (x + 1) / 2;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int ans = sum(3, n) + sum(5, n) - sum(15, n);

        cout << ans << '\n';
    }
}