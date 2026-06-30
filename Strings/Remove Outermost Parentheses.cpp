#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
        // Your code goes here
        string result = "";
        int opened =0;
        for(char c : s)
        {
            if(c == '(')
            {
                if(opened > 0)
                {
                    result = result + c;
                }
                opened++;
            }
            else
            {
                opened--;
                if(opened > 0)
                {
                    result += c;
                }
            }
        }
        return result;
    }
};
