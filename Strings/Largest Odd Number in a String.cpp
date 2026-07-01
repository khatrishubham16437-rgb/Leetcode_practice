#include<bits/stdc++.h>
using namespace std;
class Solution{	
public:		
    string largeOddNum(string& s){
        //your code goes here
        string ans = "";
        int n = s.size();
        int start = 0;

        // 1. Loop just to find where leading zeros end
        for(int i = 0; i < n; i++)
        {
            if((s[i] - '0') != 0)
            {
                start = i; // Save the index of the first non-zero number
                break;     // Now it is safe to break out of this search loop
            }
        }

        // 2. Your loop to build ans starting from that non-zero index
        for(int i = start; i < n; i++)
        {
            ans = ans + s[i];
        }

        // 3. Your second loop to find the odd number remains exactly the same
        for(int i = ans.size() - 1; i >= 0; i--)
        {
            if((ans[i] - '0') % 2 != 0)
            {
                return ans.substr(0, i + 1);
            }
        }

        return "";
    }
};