#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n; cin >> n;
    vector<long long>a(n);
    for(int i = 0;i < n;i++) cin >> a[i];

    sort(a.begin(),a.end());

    long long mini = a[0];
    long long maxi = a[n-1];

    if(mini == maxi){
        long long ways = (n * (n - 1)) / 2;
        cout << 0 << " " << ways;
    }
    else{
        long long cnt_min = count(a.begin(), a.end(), mini);
        long long cnt_max = count(a.begin(), a.end(), maxi);

        cout << (maxi - mini) << " " << (cnt_min * cnt_max);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}