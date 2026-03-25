#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the length of the longest substring 
    // that can be made with the same letter after replacing at most k characters
    int characterReplacement(string s, int k) {
        
        // Variable to store the maximum length of valid substring
        int maxLength = 0;
        
        // Traverse all possible substrings
        for (int i = 0; i < s.length(); i++) {
            
            // Initialize frequency array for current substring
            vector<int> freq(26, 0);
            
            // Track max frequency character in the current substring
            int maxFreq = 0;
            
            // Expand substring starting from index i
            for (int j = i; j < s.length(); j++) {
                
                // Update frequency of current character
                freq[s[j] - 'A']++;
                
                // Update the most frequent character seen so far
                maxFreq = max(maxFreq, freq[s[j] - 'A']);
                
                // Calculate total length of current substring
                int windowLength = j - i + 1;
                
                // Check how many characters we need to replace
                int replace = windowLength - maxFreq;
                
                // If number of replacements is within allowed k, update answer
                if (replace <= k) {
                    maxLength = max(maxLength, windowLength);
                }
            }
        }
        
        return maxLength;
    }
};

// Driver code
int main() {
    Solution sol;
    string s = "AABABBA";
    int k = 1;
    cout << sol.characterReplacement(s, k) << endl;
    return 0;
}
