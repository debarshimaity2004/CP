#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int k = 1, totalops = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] % 2 == a[i - 1] % 2) {
                k++;
            } else {
                totalops += k - 1;
                k = 1;
            }
        }
        totalops += k - 1;
        cout << totalops << "\n";
    }
    return 0;
}