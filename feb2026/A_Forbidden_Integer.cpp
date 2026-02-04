#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x; 
        if (x != 1)
        {
            cout << "YES" << endl;
            cout << n << endl; 
            for (int i = 1; i <= n; i++) 
                cout << 1 << " ";
            cout << endl;
        }
        else
        {
            // If x is 1, check if k is 1 or if k is 2 and n is odd
            if (k == 1 || (k == 2 && n % 2 == 1))
                cout << "NO" << endl; //it's not possible to form n
            else
            {
                cout << "YES" << endl; //it's possible to form n
                if (n % 2 == 0)
                {
                    cout << n / 2 << endl; 
                    for (int i = 1; i <= n / 2; i++) 
                        cout << 2 << " ";
                    cout << endl;
                }
                else
                {
                    cout << (n - 3) / 2 + 1 << endl; 
                    for (int i = 1; i <= (n - 3) / 2; i++) 
                        cout << 2 << " ";
                    cout << 3 << endl;
                }
            }
        }
    }
    return 0;
}
