
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    int numEnclaves(vector<vector<int>>& A) {
        if (A.size() <= 2) return 0;
        if (A[0].size() <= 2) return 0;
        auto h = A.size();
        auto w = A[0].size();
        for (int i = 0; i < h; i++) {
            if (i==0 || i== h - 1) { // first or last row.
                for (int j = 0; j < w; j++) {
                    DFS(A, i, j);
                }
            }
            else {
                DFS(A, i, 0);
                DFS(A, i, w - 1);
            }
        }
        int res = 0;
        for (int i = 1; i < h; i++) {
            for (int j = 1; j < w; j++) {
                res += A[i][j];
            }
        }
        return res;
    }
private:
    void DFS(vector<vector<int>>& A, int i, int j) {
    	if (A[i][j] == 0) return;
        A[i][j] = 0;
        if (i > 1) DFS(A, i - 1, j);
        if (j > 1) DFS(A, i, j - 1);
        if (i < A.size() - 1)    DFS(A, i + 1, j);
        if (j < A[1].size() - 1) DFS(A, i, j + 1);
    }
};

int main() {
	vector<vector<int> > A = 
		{{0,0,1,1,1,0,1,1,1,0,1},
		 {1,1,1,1,0,1,0,1,1,0,0},
		 {0,1,0,1,1,0,0,0,0,1,0},
		 {1,0,1,1,1,1,1,0,0,0,1},
		 {0,0,1,0,1,1,0,0,1,0,0},
		 {1,0,0,1,1,1,0,0,0,1,1},
		 {0,1,0,1,1,0,0,0,1,0,0},
		 {0,1,1,0,1,0,1,1,1,0,0},
		 {1,1,0,1,1,1,0,0,0,0,0},
		 {1,0,1,1,0,0,0,1,0,0,1}};
	cout << Solution().numEnclaves(A) << endl;
    return 0;
}









