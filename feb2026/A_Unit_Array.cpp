#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++){
            cin >> a[i];
        }
        
        long long posi = 0; 
        long long neg = 0; 
        for (long long i = 0; i < n; i++)
        {
            if (a[i] == 1)
                posi++;
            else
                neg++;
        }

        long long op = 0; 
        while (posi < neg || neg % 2 == 1) 
        {
            op++; 
            posi++; 
            neg--; 
        }

        cout << op << endl;
    }
    return 0;
}
