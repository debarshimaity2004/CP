#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int pos1 = 0;
    int pos2 = n - 1;

    //increasing
    while (pos1 + 1 < n && a[pos1] < a[pos1 + 1]) {
        pos1++;
    }

    //decreasing
    while (pos2 - 1 >= 0 && a[pos2 - 1] > a[pos2]) {
        pos2--;
    }

    //middle
    bool ok = true;
    for (int i = pos1; i <= pos2; i++) {
        if (a[i] != a[pos1]) {
            ok = false;
            break;
        }
    }
    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}