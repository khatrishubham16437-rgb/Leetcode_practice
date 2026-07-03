#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
        // Your code goes here
        int count =0;
        int maxCount =0;

        for(char c : s)
        {
            if(c == '(')
            {
                count++;
                if(count > maxCount)
                {
                    maxCount = count;
                }
            }
            else if(c == ')')
            {
                count--;
            }
            else{
                continue;
            }
        }
        return maxCount;
    }
};
