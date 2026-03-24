#include<bits/stdc++.h>
using namespace std;

double binpow(int a, int b) {
    if(b == 0) return 1;
    if(b % 2 == 1) return (a * binpow(a, b-1));
    int x = binpow(a, b/2);
    return (x * x) ;
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    int target = 0;
    for(char c : s1){
        if(c == '+') target++;
        else target--;
    }

    int current = 0, q = 0;
    for(char c : s2){
        if(c == '+') current++;
        else if(c == '-') current--;
        else q++;
    }

    int diff = target - current;

    if((diff + q) % 2 != 0){
        cout << fixed << setprecision(12) << 0.0;
        return 0;
    }

    int x = (diff + q) / 2;

    if(x < 0 || x > q){
        cout << fixed << setprecision(12) << 0.0;
        return 0;
    }

    double ways = 1;
    for(int i = 0; i < x; i++){
        ways *= (q - i);
        ways /= (i + 1);
    }

    double total = binpow(2, q);

    cout << fixed << setprecision(12) << ways / total;
}