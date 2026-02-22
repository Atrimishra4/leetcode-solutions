#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
    cin >> arr[i];

    } //[1,1,1,2,2]
    

    //precompute
    map <int ,int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++; // map stores in order format with respect to keys
    }



    // iteratr through map
    for (auto it : mpp)
    {
        cout << it.first <<" -> " << it.second <<endl; // prints 1 -> 2 where 1 is the value in array and 2 is the frequency of it
    } 
    
    int q;
    cin>> q; // take number of queries
    while(q--){
        int number;
        cin >> number;
        // fetch 
        cout<< mpp[number] << endl;
    }
    return 0;
}