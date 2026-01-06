#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    int i=1;
    while(n%i ==0)
    i++;
    cout<<i-1<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}