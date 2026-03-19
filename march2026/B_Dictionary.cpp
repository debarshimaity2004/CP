#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;

    char x = s[0];
    char y = s[1];

    int index = (x - 'a') * 25 + (y - 'a') + 1;
    if(y > x) index--;
    cout << index << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}