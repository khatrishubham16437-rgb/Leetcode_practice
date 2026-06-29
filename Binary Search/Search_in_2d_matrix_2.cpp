#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        for(int i=0 ; i<n ; i++)
        {
            int low =0;
            int high = m - 1;
            while(low <= high)
            {
                int mid = low +((high-low)/2);
                int element = matrix[i][mid];
                if(element < target)
                {
                    low = mid + 1;
                }
                else if(element > target)
                {
                    high = mid -1;
                }
                else
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{

    return 0;
}