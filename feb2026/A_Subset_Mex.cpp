#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];
        int cnt[101];
        for(int i = 0;i < 101;i++) cnt[i] = 0;

        for(int i = 1;i <= n;i++){
            cin >> a[i];
            cnt[a[i]]++;
        }
        int mexa = 0;
        while(cnt[mexa] >= 2) mexa++;

        int mexb = 0;
        while(cnt[mexb] >= 1) mexb++;

        cout << mexa + mexb <<endl;
    }
    return 0;
}