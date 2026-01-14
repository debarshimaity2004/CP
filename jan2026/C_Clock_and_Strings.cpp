#include<bits/stdc++.h>
using namespace std;

bool between(int a, int b, int x) {
    if(a < b)
        return (a < x && x < b);
    else
        return (x > a || x < b);
}

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool c_in = between(a, b, c);
    bool d_in = between(a, b, d);

    if(c_in ^ d_in)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
