#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string pattern = "meow";
    int j = 0;

    for (int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
    }

    if (s[0] != 'm') {
        cout << "NO\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        char c = s[i];

        if (c != 'm' && c != 'e' && c != 'o' && c != 'w') {
            cout << "NO\n";
            return;
        }

        if (c == pattern[j]) continue;

        if (j < 3 && c == pattern[j + 1]) {
            j++;
        } else {
            cout << "NO\n";
            return;
        }
    }

    if (j == 3)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
