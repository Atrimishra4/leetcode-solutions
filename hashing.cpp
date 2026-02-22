#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    //precompute
    int hash[26] = {0};
    for(int i = 0 ;i < s.size();i++)
    {
        hash[s[i] - 'a']++; //increment the count of element appearing 
    }

    int q;
    cin>> q; // take number of queries
    while(q--){
        char c;
        cin >> c;
        // fetch 
        cout<< hash[c - 'a'] << endl;
    }
    return 0;
}  // for lowercase and uppercae do hash[256] instead of hash[26]
  // and remove c - 'a' to only c