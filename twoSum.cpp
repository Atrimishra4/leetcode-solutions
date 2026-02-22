#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> twoSum (vector<int>& nums, int target) {
      unordered_map<int, int> pairIdx;

        for (int i = 0; i < nums.size(); ++i)
         {
            int num = nums[i];
            if (pairIdx.find(target - num) != pairIdx.end()) // Check if the complement exists in the map
            {
                return {i, pairIdx[target - num]};// Return the indices of the two numbers
            }
            pairIdx[num] = i; // Store the index of the current number in the map
        }

        return {}; 
    }
};

 int main(){
  vector<int> arr = {2, 6, 5, 3, 11}; 
  int target = 14;
  Solution sol;
  vector<int> result = sol.twoSum(arr, target);
  if (!result.empty()) {
    cout << "Numbers: " << arr[result[0]] <<" at index "<< result[0] << ", " << arr[result[1]] << " at index " << result[1] << endl;
  } else {
    cout << "No two numbers found that add up to the target." << endl;
  }
  return 0;
}