#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        long long x;
        cin>>n>>x;
        int cntL=0, cntE=0, cntG=0;

        for(int i=0;i<n;i++){
            long long a;
            cin>>a;
            if(a<x) cntL++;
            else if(a==x) cntE++;
            else cntG++;
        }

        if(cntL==0||cntG==0||cntE>0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
