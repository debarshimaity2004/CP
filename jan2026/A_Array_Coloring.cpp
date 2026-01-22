#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool ok = true;

    for (int i = 0; i < n - 1; i++)
    {
        if ((a[i] % 2) == (a[i + 1] % 2))
        {
            ok = false;
            break;
        }
    }

    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
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