#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 1;i <= n;i++){
            cin >> a[i];
        }
        long long pos = 0;
        long long rem_neg = 0;
        for(int i = 1;i <= n;i++){
            if(a[i] >= 0){
                pos += a[i];
            }
            else{
                if(pos >= abs(a[i])){
                    pos -= abs(a[i]);
                }
                else{
                    rem_neg += (abs(a[i]) - pos);
                    pos = 0;
                }
            }
        }
        cout << rem_neg << endl;
    }
    return 0;
}