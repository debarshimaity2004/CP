#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;
        
        if (c % 2 == 1) // odd
        {
            if (b > a) 
                cout << "Second" << endl; // Katie wins
            else
                cout << "First" << endl; // Anna wins
        }
        else 
        {
            if (a > b)
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        } 
    }
    return 0;
}