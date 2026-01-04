#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long x;
    cin>>x;
    int flag=1;
    while(x >=10){
        int digit = x %10;
        if(flag ==1){
            flag=0;
            if(digit >8){
                cout<<"NO"<<'\n';
                return;
            }
        }
        else if(digit==0){
            cout<<"NO"<<'\n';
            return;
        }
        x /=10;
    }
    if(x==1){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
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