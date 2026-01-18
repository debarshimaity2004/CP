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

    int max_so_far = a[0];
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < max_so_far)
        {
            cnt++;
        }
        else
        {
            max_so_far = a[i];
        }
    }

    cout << cnt << '\n';
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