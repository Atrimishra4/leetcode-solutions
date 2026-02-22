#include <bits/stdc++.h>
using namespace std;
int main(){
   int max1 = 0;
   int cnt = 0;
   int arr[]  = {1,1,0,1,1,1,0,1,1};
   int n = sizeof(arr)/sizeof(arr[0]);
 
   for (int i = 0; i < n; i++)
   {
    if(arr[i]==1){
        cnt++;
        max1 = max(max1,cnt);
    }
    else{
        cnt = 0;
       }
   }
   cout << max1 << endl;
    return max1;
}