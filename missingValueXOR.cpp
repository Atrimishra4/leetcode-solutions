#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int arr[] = [1,2,4,5];
    xor xor1 =0;
    xor xor2 = 0;
    for (int i = 0; i <n ; i++)
    {
     xor1 = xor ^i; 
    }
    for (int i = 0; i < n-1 ; i++)
    {
       xor2 = xor2^arr[i];
    }
     cout << xor1 ^ xor2 << endl;

    return 0;
}