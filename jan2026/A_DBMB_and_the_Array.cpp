#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n, s, x;
        cin >> n >> s >> x;

        int sum = 0;
        int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }

        int diff = s - sum;

        if(diff >= 0 && diff % x == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}
