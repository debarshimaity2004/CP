#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int min_operation = INT_MAX;
    for(int i = 0;i < n;i++){
        min_operation = min(min_operation ,abs(a[i]) );
    }
    cout << min_operation << endl;
}