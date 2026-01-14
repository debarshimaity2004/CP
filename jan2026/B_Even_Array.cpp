#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int cnt1 = 0, cnt2 = 0;

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0 && a[i] % 2 == 1)
            cnt1++;
        if(i % 2 == 1 && a[i] % 2 == 0)
            cnt2++;
    }

    if(cnt1 != cnt2)
        cout << -1 << '\n';
    else
        cout << cnt1 << '\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}