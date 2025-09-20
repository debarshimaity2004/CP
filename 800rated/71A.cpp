//71A. Way Too Long Words
#include <bits/stdc++.h>
using namespace std;    

int main()
{
    int words;
    cin>>words;
    while(words--)
    {
        string s;
        cin>>s;
        if(s.length()>10)
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        else
            cout<<s<<endl;
    }
}

// Time Complexity (TC): O(n) 
// Space Complexity (SC): O(1)