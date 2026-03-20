#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0,size=0;
    for(int i =0;i<nums.size();i++)
    {  
        if(nums[i]==nums[j]){
            size =size +1;
            if(size == 2)j=i;
        }
        else{
            nums[j++] =nums[i];
            size =1;
        }

    }
    return j;
    }
};
int main(){
    Solution s;
    vector<int> nums = {1,1,2,3,3,4,5,5};
    int newsize = s.removeDuplicates(nums);
    for(int i=0;i<newsize;i++){
        cout << nums[i] << " ";
    }
    return 0;
}