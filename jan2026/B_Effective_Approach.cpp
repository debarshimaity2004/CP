#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    vector<int> pos(n + 1);   // 1-based value positions

    for (int i = 0; i < n; i++) {
        pos[a[i]] = i + 1;    // store position (1-based)
    }

    long long left = 0, right = 0;

    for (int i = 0; i < m; i++) {
        int x = b[i];
        left  += pos[x];
        right += (n - pos[x] + 1);
    }
    cout<<left<<" "<<right<<'\n';
    return 0;
}