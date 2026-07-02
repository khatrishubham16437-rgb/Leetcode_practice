#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        /*
        This is my solution
        int n = s.size();
            char s1 = s[0];
            if(s.size() != goal.size()) return false;
            for(int j=0 ; j<n ; j++)
            {
                s1=s[0];
                for(int i=0 ; i<n-1 ; i++)
                {
                    s[i] = s[i+1];
                }
                s[n-1] = s1;
                
                if(s == goal)
                {
                    return true;
                }
            }
        return false;
        */

        // This is optimal solution
        // Condition 1: Lengths must be exactly the same
    if (s.size() != goal.size()) return false;
    
    // Condition 2: Check if 'goal' is a substring of 's + s'
    // string::npos is C++ language for "not found"
    return (s + s).find(goal) != string::npos;

    }
};