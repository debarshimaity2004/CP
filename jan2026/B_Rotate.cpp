#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<string> b = a;

    // top row
    for(int j = 1; j < n; j++) {
        b[0][j] = a[0][j - 1];
    }

    // right column
    for(int i = 1; i < n; i++) {
        b[i][n - 1] = a[i - 1][n - 1];
    }

    // bottom row
    for(int j = 0; j < n - 1; j++) {
        b[n - 1][j] = a[n - 1][j + 1];
    }

    // left column
    for(int i = 0; i < n - 1; i++) {
        b[i][0] = a[i + 1][0];
    }

    for(int i = 0; i < n; i++) {
        cout << b[i] << '\n';
    }

    return 0;
}
