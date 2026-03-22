#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    set<char> allowed;
    for(int i = 0; i < k; i++){
        char c;
        cin >> c;
        allowed.insert(c);
    }

    int ans = 0;
    int len = 0;

    for(int i = 0; i < n; i++){
        if(allowed.count(s[i])){
            len++;
        } else {
            ans += (len * (len + 1)) / 2;
            len = 0;
        }
    }

    // last segment
    ans += (len * (len + 1)) / 2;
    cout << ans << '\n';
}