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

    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }

    int d = st.size();
    int ans = INT_MAX;

    for (int x : st)
    {
        if (x >= d)
        {
            ans = min(ans, x);
        }
    }

    cout << ans << '\n';
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