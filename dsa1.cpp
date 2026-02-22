#include <bits/stdc++.h>
using namespace std;
int main()
{
   int arr[] = {1,2,4,7,7,5};
   int slarge=-1,large=1;
    for(int i = 0;i<6;i++)
    {
        if(arr[i]>large){
            slarge = large;
            large = arr[i];
        }
        else if(arr[i]>slarge && arr[i]<large){
            slarge = arr[i];
        }
    }
    cout <<"Second largest = " << slarge <<" Largest = " << large;
}