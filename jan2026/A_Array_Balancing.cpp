#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    long long sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if ((abs(a[i] - a[i + 1]) + abs(b[i] - b[i + 1])) > (abs(a[i] - b[i + 1]) + abs(b[i] - a[i + 1])))
        {
            swap(a[i + 1], b[i + 1]);
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        sum += abs(a[i] - a[i + 1]) + abs(b[i] - b[i + 1]);
    }
    cout << sum << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}