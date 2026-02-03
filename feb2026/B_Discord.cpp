#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(m, vector<int>(n));

    // Input (0-based)
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            a[i][j]--;
        }
    }

    // adj[x][y] = true if x and y were ever neighbors
    vector<vector<bool>> adj(n, vector<bool>(n, false));

    // Process each photo
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            int x = a[i][j];
            int y = a[i][j + 1];

            adj[x][y] = true;
            adj[y][x] = true;
        }
    }

    int ans = 0;

    // Count pairs that were never adjacent
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (!adj[i][j])
                ans++;
        }
    }

    cout << ans << endl;
}
