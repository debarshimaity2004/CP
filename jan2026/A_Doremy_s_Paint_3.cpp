#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        map<long long, long long> freq_map;
        for (int i = 0; i < n; i++)
        {
            freq_map[a[i]]++;
        }
        if (freq_map.size() >= 3)
        {
            cout << "No" << "\n";
        }
        else
        {
            long long f1 = freq_map.begin()->second;
            long long f2 = freq_map.rbegin()->second;

            if (f1 == f2)
            {
                cout << "Yes" << "\n";
            }
            else if (n % 2 == 1 && abs(f1 - f2) == 1)
            {
                cout << "Yes" << "\n";
            }
            else
            {
                cout << "No" << "\n";
            }
        }
    }
    return 0;
}