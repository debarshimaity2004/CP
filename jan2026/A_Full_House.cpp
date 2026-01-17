#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a(5);
    for(int i =0 ; i < 5; i++){
        cin >> a[i];
    }
    map<int,int>freq;
    for(int i = 0; i < 5; i++) {
        freq[a[i]]++;
    }

    bool three = false, two = false;

    for(auto it : freq) {
        if(it.second == 3) three = true;
        if(it.second == 2) two = true;
    }

    if(three && two)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}