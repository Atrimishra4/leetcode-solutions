#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
     vector<int> leader(vector<int>& nums){
        int size = nums.size()-1;
        int maxi = INT_MIN; 
        vector<int> lead;

        while(size>0){
            if(nums[size]>maxi){
                maxi = nums[size];
                lead.push_back(maxi);
            } 
            size--;
        }
        return lead;
        
     }

};
int main(){
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