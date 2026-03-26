#include<bits/stdc++.h>
using namespace std;
#define int long long

void factors(int x){
    vector<int>ans;
    for(int i = 1; i * i <= x;i++){
        if(x % i == 0){
            ans.push_back(i);
            if(x / i != i) ans.push_back(x / i);
        }
    }
    sort(ans.begin(), ans.end());
    for(auto x : ans) cout << x <<'\n';
}

void solve(){
    int n; cin >> n;
    factors(n);
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}