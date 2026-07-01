#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //your code goes here
            if (strs.empty()) return "";
    
            // 1. Sort the array alphabetically
            sort(strs.begin(), strs.end());
            
            // 2. Grab the first and last words
            string first = strs[0];
            string last = strs[strs.size() - 1];
            
            string result = "";
            
            // 3. Compare them character by character
            // Limit the loop to the shorter of the two words to avoid out-of-bounds
            int minLength = min(first.length(), last.length());
            for (int i = 0; i < minLength; i++) {
                if (first[i] == last[i]) {
                    result += first[i];
                } else {
                    break; // Stop at the very first mismatch
                }
            }
            
        return result;
    }
};