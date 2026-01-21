#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n - 1; i++) {
        cout << a[i] << " ";

        if(a[i] < a[i + 1]) {
            for(int x = a[i] + 1; x < a[i + 1]; x++) {
                cout << x << " ";
            }
        }
        else {
            for(int x = a[i] - 1; x > a[i + 1]; x--) {
                cout << x << " ";
            }
        }
    }

    cout << a[n - 1] << '\n';
    return 0;
}
