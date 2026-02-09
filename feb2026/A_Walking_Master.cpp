#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int src_x, src_y, dest_x, dest_y;
        cin >> src_x >> src_y >> dest_x >> dest_y;

        if (dest_y < src_y) 
        {
            cout << -1 << endl;
            continue;
        }
        int moves = dest_y - src_y; 
        src_x += moves;

        if (src_x < dest_x)
        {
            cout << -1 << endl; 
            continue;
        }
        moves += (src_x - dest_x); 
        cout << moves << endl;
    }
    return 0;
}
