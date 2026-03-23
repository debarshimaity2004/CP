#include<bits/stdc++.h>
using namespace std;

bool compare(const pair<long long,int>& x, const pair<long long,int>& y){
    if(x.first != y.first) return x.first < y.first;
    return x.second > y.second;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m;
    cin >> m;

    vector<long long> A(m), B(m);

    for(int i = 0; i < m; i++) cin >> A[i];
    for(int i = 0; i < m; i++) cin >> B[i];

    vector<pair<long long,int>> b;
    for(int i = 0; i < m; i++){
        b.push_back({B[i], i});
    }

    sort(A.begin(), A.end(), greater<long long>());  
    
    //on tie in B value, sort by index descending
    sort(b.begin(), b.end(), compare);
    
    vector<long long> res(m);

    for(int i = 0; i < m; i++){
        res[b[i].second] = A[i];
    }

    for(int i = 0; i < m; i++){
        cout << res[i] << " ";
    }
}