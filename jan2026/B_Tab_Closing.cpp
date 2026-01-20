#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, n;
    cin >> a >> b >> n;

    if (b * n <= a || b >= a)
    {
        cout << 1 << '\n';
    }
    else
    {
        cout << 2 << '\n';
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}