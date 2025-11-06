#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long x;
        cin >> x;

        if(n == 1) {
            cout << (a[0] == x ? "YES\n" : "NO\n");
            continue;
        }

        long long mini = *min_element(a.begin(), a.end());
        long long maxi = *max_element(a.begin(), a.end());
        if(mini <= x && x <= maxi) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
