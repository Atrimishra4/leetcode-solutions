#include <bits/stdc++.h>
using namespace std;
class Solution {
public:    vector<int> findUnion(vector<int> arr1, vector<int> arr2) 
{
  vector <int> unionArr;
  int n = arr1.size();
  int m = arr2.size();
  int i = 0, j=0 ;

  while(i<n && j<m)
  {
    if(arr1[i] < arr2[j])
     {
       if (unionArr.size() == 0 || unionArr.back() != arr1[i]) 
       {
         unionArr.push_back(arr1[i]);
       }
       i++;
     }
    else {
       if (unionArr.size() == 0 || unionArr.back() != arr2[j]) 
       {
         unionArr.push_back(arr2[j]);
       }
       j++;
     }
  }
  while(i<n)
  {
    if (unionArr.size() == 0 || unionArr.back() != arr1[i]) 
    {
       unionArr.push_back(arr1[i]);
    } i++;
    
  }

  while(j<m)
  {
    if (unionArr.size() == 0 || unionArr.back() != arr2[j]) 
    {
       unionArr.push_back(arr2[j]);
    }
     j++;
  }
return unionArr;
};
};


int main(){
  vector<int> arr1 = {1, 2, 4, 5, 6};
  vector<int> arr2 = {2, 3, 5, 7};
  Solution sol;
  vector<int> result = sol.findUnion(arr1, arr2);
  
  cout << "Union of the two arrays is: ";
  for (int num : result) {
    cout << num << " ";
  }
  
  return 0;


}