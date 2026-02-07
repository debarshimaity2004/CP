#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;

    for(long long i = 0; i < n; i++){
        long long x;
        cin >> x;
        cout << n + 1 - x << " ";
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
