#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        if(nums.size()<=1) return nums.size();
        int maxlen =0, r =0, l =0,zero =0;
        while(r<nums.size())
        {
            if(nums[r]==0){zero++;}
            if(zero<=k){
                maxlen = max(maxlen,r-l+1);
            }
            else{
                if(nums[l]==0){zero--;}
                l++;
            }
            r++;
        }
        return maxlen;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;
    cout << s.longestOnes(nums,k) << endl;
    return 0;
}