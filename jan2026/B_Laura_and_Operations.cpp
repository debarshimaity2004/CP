#include<bits/stdc++.h>
using namespace std;

long long is_possible(long long a, long long b, long long c) {
    if(b%2 == c%2){
        return 1;
    }
    return 0;
}

void solve(){
    long long a, b, c;
    cin>>a>>b>>c;
    int ans[3]={0, 0, 0};
    ans[0] = is_possible(a, b, c);
    ans[1] = is_possible(b, a, c);
    ans[2] = is_possible(c, a, b);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}