#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long ans = LLONG_MAX;

    for(long long base = 1; base <= 1000000000; base *= 10) {
        for(int d = 1; d <= 9; d++) {
            long long lucky = d * base;
            if(lucky > n) {
                ans = min(ans, lucky);
            }
        }
    }

    cout << ans - n << '\n';
    return 0;
}