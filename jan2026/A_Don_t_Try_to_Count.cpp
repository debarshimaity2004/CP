#include <bits/stdc++.h>
using namespace std;

bool check(string s, string x)
{

    if (x.size() < s.size())
        return false;

    for (int i = 0; i <= x.size() - s.size(); i++)
    {

        bool ok = true;

        for (int j = 0; j < s.size(); j++)
        {
            if (x[i + j] != s[j])
            {
                ok = false;
                break;
            }
        }

        if (ok)
            return true;
    }

    return false;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int ans = -1;

        for (int i = 0; i <= 10; i++)
        {

            if (check(s, x))
            {
                ans = i;
                break;
            }

            x = x + x;
        }

        cout << ans << '\n';
    }

    return 0;
}
