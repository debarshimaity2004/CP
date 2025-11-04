#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int ops = 0;

        while (n != 1) {
            if (n % 6 == 0) {
                n /= 6;
                ops++;
            } else if (n % 3 == 0) {  
                n *= 2;
                ops++;
            } else {
                ops = -1;
                break;
            }
        }

        cout << ops << "\n";
    }
    return 0;
}
