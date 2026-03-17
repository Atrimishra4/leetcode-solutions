#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 7;
    int arr[] = {1,1,2,4,4,5,5};
    int xorit = 0;
   
    for(int i=0; i<n; i++){
        xorit = xorit ^ arr[i];
    }
    cout << xorit << endl;
    return 0;
};