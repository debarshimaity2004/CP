#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n,a,b;
        cin >> n >> a >> b;
        cout<<((n==a && a==b)||(a+b+1<n)?"Yes":"No")<<"\n";
    }
    return 0;
}