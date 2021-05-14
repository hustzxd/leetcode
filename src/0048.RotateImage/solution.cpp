#include "../../include/solution.h"


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = n-1;
        int tmp;
        for (int i=0; i < n/2; i++) {
            for (int j=i; j<n-1-i; j++) {
                // tmp = top left
                tmp = matrix[i][j]; 
                // top left = bottom left
                matrix[i][j] = matrix[m-j][i];
                // bottom left = bottom right
                matrix[m-j][i] = matrix[m-i][m-j];
                // bottom right = top right
                matrix[m-i][m-j] = matrix[j][m-i];
                // top right = tmp
                matrix[j][m-i] = tmp;
            }
        }
    }
};


int main() {
    // vector<vector<int> > matrix = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };
     vector<vector<int> > matrix = {
        {1,2,3,4},
        {4,5,6,5},
        {7,8,9,4},
        {3,4,5,6}
    };
    Solution().rotate(matrix);
    for (auto line : matrix) {
        for (auto l : line) {
            cout << l << " ";
        }
        cout << "\n";
    }
	return 0;
}