#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

    vector<int> leader(vector<int>& nums){
        int n = nums.size();
        vector <int> lead;
        for(int i=0;i<n;i++)
        {   int j;
            for(j=i+1; j<n ;j++)
            {
                if(nums[i]<nums[j]) break;

            }
            if(j == n){
              lead.push_back(nums[i]);
            }
        }
        return lead;

    }
};

int main()
{
    vector <int> arr = {10,22,12,3,0,6};
    vector<int> sol;
    Solution s;
    sol = s.leader(arr);
    cout<< "leaders are :-)"<<endl;
    for(int i : sol){
        cout<<i << endl;
    }
    return 0;
};
