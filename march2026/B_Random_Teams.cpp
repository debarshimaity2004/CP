#include<bits/stdc++.h>
using namespace std;
#define int long long

int C2(int x){
    return x * (x - 1) / 2;
}

signed main(){
    int n, m;
    cin >> n >> m;

    int max_pairs = C2(n - m + 1);

    int q = n / m;
    int r = n % m;

    int min_pairs = r * C2(q + 1) + (m - r) * C2(q);

    cout << min_pairs << " " << max_pairs << '\n';
}