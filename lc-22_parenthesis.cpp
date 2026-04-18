#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    void solve(string str, vector<string>& ans, int open, int close, int n) {
        if (str.length() == 2 * n) {
            ans.push_back(str);
            return;
        }

        if (open < n) {
            solve(str + "(", ans, open + 1, close, n);
        }

        if (close < open) {
            solve(str + ")", ans, open, close + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve("", ans, 0, 0, n);
        return ans;
    }
};

int main() {
    int num;
    cout << "Give the number of pair needed: ";
    cin >> num;

    Solution obj;
    vector<string> ans = obj.generateParenthesis(num);

    cout << "The answer for " << num << endl;
    for (auto it : ans) {
        cout << it << endl;
    }

    cout << "Thank you";
};

/*
BETTER VERSION: 0ms runtime
class Solution {
public:
    void call(int &n, int o,int c, vector<string>&arr, string curr){
        if (c == o && c == n){
            arr.push_back(curr);
        }
        if (o < n){
            call(n, o+1, c, arr, curr + '(');
        }
        if (c < o){
            call(n, o, c+1, arr, curr + ')');
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>arr = {};
        call(n,0,0,arr,"");
        return arr;
    }
};
*/