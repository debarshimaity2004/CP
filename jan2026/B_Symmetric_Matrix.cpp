#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    bool ok = false;
    for(int i = 0; i < n; i++) {
        int a, b, c, d;
        cin >> a >> b;
        cin >> c >> d;
        if(b == c) {
            ok = true;
        }
    }
    if(m % 2 == 1) {
        cout << "NO\n";
    }
    else {
        if(ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}