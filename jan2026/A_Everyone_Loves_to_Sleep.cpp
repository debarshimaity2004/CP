#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, H, M;
    cin >> n >> H >> M;

    int sleepTime = H * 60 + M;
    int ans = 1440; // max possible (24 hours)

    for (int i = 0; i < n; i++)
    {
        int h, m;
        cin >> h >> m;

        int alarmTime = h * 60 + m;

        if (alarmTime < sleepTime)
        {
            alarmTime += 1440;
        }

        ans = min(ans, alarmTime - sleepTime);
    }

    cout << ans / 60 << " " << ans % 60 << '\n';
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