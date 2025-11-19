#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        int c1 = 0, c2 = 0, c3 = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin>>x;
            if(x == 1)c1++;
            else if(x == 2)c2++;
            else c3++;
        }
        int del13 = min(c1, c3); 
        int del2 = max(0, c2 - 1);
        cout << del13 + del2 << "\n";
    }
    return 0;
}
