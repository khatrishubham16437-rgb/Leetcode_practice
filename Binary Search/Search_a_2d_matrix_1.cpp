#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;

        int row = matrix.size();
        int col = matrix[0].size();

        // Treat the 2D matrix as a 1D array of size (row * col)
        int low = 0;
        int high = (row * col) - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // Convert 1D index back to 2D matrix coordinates
            int element = matrix[mid / col][mid % col];

            if (element == target) {
                return true;
            } 
            else if (element < target) {
                low = mid + 1; // Search the right half
            } 
            else {
                high = mid - 1; // Search the left half
            }
        }

        return false;
    }
};

int main()
{

    return 0;
}