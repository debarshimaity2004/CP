#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long>a(n);
        map<long long,long long>mp;
        for(long long i = 0;i < n;i++){
            cin >> a[i];
            mp[a[i] - i]++;
        }
        long long ans = 0;
        for(auto x: mp){
            ans += (x.second * (x.second - 1)) / 2; 
        }
        cout << ans << "\n";
    }
    return 0;
}