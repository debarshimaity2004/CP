#include<bits/stdc++.h>
using namespace std;

void solve(){
    int l,a,b;
    cin>> l>> a>> b;
    int cur = a;
    int maxi = a;

    for(int i = 0; i < l; i++) {
        cur = (cur + b) % l;
        maxi = max(maxi, cur);
    }
    cout << maxi << '\n';

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}