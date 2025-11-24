#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long a, b, k;
    cin >> a >> b >> k;
 
    bool memo = (a % k == 0);
    bool momo = (b % k == 0);
 
    if (memo && momo) cout << "Both";
    else if (memo) cout << "Memo";
    else if (momo) cout << "Momo";
    else cout << "No One";
 
    return 0;
}
