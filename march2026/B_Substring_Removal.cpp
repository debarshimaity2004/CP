#include<bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 998244353;

signed main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int l = 1;
    while(l < n && s[l] == s[0]) l++;

    int r = 1;
    while(r < n && s[n-1-r] == s[n-1]) r++;

    int ans;

    if(s[0] == s[n-1]){
        ans = ((l + 1) * (r + 1)) % mod;
    } else {
        ans = (l + r + 1) % mod;
    }

    cout << ans << '\n';
}