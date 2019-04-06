#include "../../include/solution.h"

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pre;
        pre.push_back(1);
        if (rowIndex == 0) return pre;
        REP(i, 1, rowIndex + 1) {
            vector<int> now;
            now.push_back(1);
            REP(j, 1, i) {
                now.push_back(pre[j-1] + pre[j]);                
            }
            now.push_back(1);
            pre = now;
        }
        return pre;
    }
};

int main() {
	REP(i, 0, 10) {
        auto res = Solution().getRow(i);
        REP(j, 0, res.size()) {
            cout << res[j] << " ";
        }
        cout << endl;
    }
	return 0;
}