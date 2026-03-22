#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    string s(n, 'a');

    for(int i = n-2; i >= 0; i--){
        int cnt = n - i - 1;

        if(k <= cnt){
            s[i] = 'b';
            s[n - k] = 'b';
            break;
        }
        else{
            k -= cnt;
        }
    }

    cout << s << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}