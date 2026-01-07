#include<bits/stdc++.h>
using namespace std;

bool checker(int mid, vector<int>& piles, int h){
    int hours = 0;

    for(int i = 0; i < piles.size(); i++){
        hours += ceil(piles[i] * 1.0 / mid);
        if(hours > h) return false;
    }

    return hours <= h;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1;
    int high = INT_MIN;

    for(int i = 0; i < piles.size(); i++){
        high = max(high, piles[i]);
    }

    int ans = high;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(checker(mid, piles, h)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<int> piles(n);
    for(int i = 0; i < n; i++){
        cin >> piles[i];
    }

    int h;
    cin >> h;

    int answer = minEatingSpeed(piles, h);
    cout << answer << '\n';

    return 0;
}
