#include<bits/stdc++.h>
using namespace std;
#define int long long

int sieve[100005];

void solve(){
    int n;
    cin >> n;
    for(int i=2; i<=n+1; i++)
	{
		if(!sieve[i])
			for(int j=2*i; j<=n+1; j+=i)
				sieve[j]=1;
	}
	
	if(n>2) cout<<"2\n";
	else cout<<"1\n";

	for(int i=2; i<=n+1; i++)
	{
		if(!sieve[i]) cout<<"1 ";
		else cout<<"2 ";
	}
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}