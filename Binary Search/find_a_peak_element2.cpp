#include<bits/stdc++.h>
using namespace std;
int checkMax(vector<vector<int>> &mat , int mid , int rows)
    {
        int maxValue = INT_MIN;
        int maxIndex = -1;
        for(int i=0 ; i<rows ; i++)
        {
            if(mat[i][mid] > maxValue)
            {
                maxValue = mat[i][mid];
                maxIndex = i;
            } 
        }
        return maxIndex;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0;
        int high = m - 1;
        while(low <= high)
        {
            int mid = low +((high-low)/2);
            int index = checkMax(mat,mid , n);
            int left = mid - 1 >= 0 ? mat[index][mid-1] : INT_MIN;
            int right = mid +1 < m ? mat[index][mid+1] : INT_MIN;
            if(mat[index][mid] > left && mat[index][mid] > right)
            {
                return {index , mid};
            }
            else if(mat[index][mid] < left)
            {
                high = mid -1;
            }
            else
            {
                low = mid +1;
            }
        }
        return {-1,-1};
    }

