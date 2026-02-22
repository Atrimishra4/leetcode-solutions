#include <bits/stdc++.h>
using namespace std;    
class Solution {
public:    void moveZeroes(vector<int>& nums) {
      int x = 0;
     for(int i = 0;i<nums.size();i++)
     {
        if(nums[i]!=0){
            nums[x++]= nums[i];
        }
     } 
     while(x<nums.size())  {
        nums[x++] = 0;
     }
     for(int i=0;i<nums.size();i++) //best way t.c = O(n) s.c = O(1)
     {
        cout<<nums[i]<<" ";
     }}
};
int main()
{    vector<int> nums = {0,1,0,3,12,8,7,0,4,5,0,0,0,0,0,0,0,0,0,0};
    Solution s;
    s.moveZeroes(nums);
}