#include<bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    int total = 21 * 60 + k;
    int hour = total / 60;
    int minute = total % 60;

    if(hour < 10) cout << "0";
    cout << hour << ":";

    if(minute < 10) cout << "0";
    cout << minute << '\n';

    return 0;
}
