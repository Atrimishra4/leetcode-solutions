#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     vector<int> temp;
     int j;
     for(int i =0;i<nums.size();i++){
        if(nums[i]!=0){
        temp.push_back(nums[i]);
         j = temp.size();
        }else j++;
     }  
     int k=0;
     while(k<nums.size()){
        if(k<j){
            nums[k] = temp[k];
        }else{
            nums[k]=0;
        }
        k++;
     }
     for(int i=0;i<nums.size();i++)
     {
        cout<<nums[i]<<" ";
     }
    }
};
int main()
{
    vector<int> nums = {0,1,0,3,12,8,7,0,4,5,0,0,0,0,0,0,0,0,0,0};
    Solution s;
    s.moveZeroes(nums);
} 