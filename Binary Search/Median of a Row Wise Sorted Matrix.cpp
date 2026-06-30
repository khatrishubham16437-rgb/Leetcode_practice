#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int Uperbound(vector<int> &matrix , int x, int m)
    {
        int low = 0;
        int high = m-1;
        int ans=m;
        while(low <= high)
        {
            int mid= low + ((high-low)/2);
            if(matrix[mid] > x)
            {
                ans = mid;
                high = mid -1 ;
            }
            else
            {
                low = mid +1;
            }
        }
        return ans;
    }

    int blackbox(vector<vector<int>> &matrix , int n, int m ,int x)
    {
        int count =0;
        for(int i=0 ; i<n ; i++)
        {
            count = count + Uperbound(matrix[i] , x , m);
        }
        return count;
    }

    int findMedian(vector<vector<int>>&matrix) {
      int row = matrix.size();
      int col = matrix[0].size();
      int high = INT_MIN;
      int low = INT_MAX;

      for(int i=0 ; i<row ; i++)
      {
        low = min(low, matrix[i][0]);
        high = max(high, matrix[i][col-1]);
      }

      int request = (row*col)/2;

      while(low <= high)
      {
        int mid = low +((high-low)/2);
        int smallEqual = blackbox(matrix , row,col,mid);
        if(smallEqual <= request)
        {
            low = mid +1;
        }
        else
        {
            high = mid - 1;
        }  
      }
      return low;
    }
};