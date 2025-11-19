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
        cin>>n;
        int bestIdx = 1;
        int bestSpeed = -1;
        for(int i = 1; i <= n; i++){
            int d, t;
            cin >> d >> t;
            int speed = d / t;
            if(speed > bestSpeed){
                bestSpeed = speed;
                bestIdx = i;
            }
        }
        cout << bestIdx << "\n";
    }
    return 0;
}
