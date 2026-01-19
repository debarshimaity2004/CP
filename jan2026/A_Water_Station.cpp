#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int rem = n % 5;

    if(rem <= 2)
        cout << n - rem << '\n';
    else
        cout << n + (5 - rem) << '\n';

    return 0;
}
