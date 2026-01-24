#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n ,k;
        cin >> n >> k;
        vector<long long>a(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        long long present = 0;
        for(int i = 0;i < n;i++){
            if(a[i] == k){
                present = 1;
                break;
            }
        }
        if(present == 1){
            cout << "YES"<<"\n";
        }
        else{
            cout <<"NO"<<"\n";
        } 
    }
    return 0;
}