#include "../../include/solution.h"


class Solution {
public:
    bool judgeCircle(string moves) {
        int i=0, j=0;
        for (auto a : moves) {
            if (a == 'U') j++;
            else if (a == 'D') j--;
            else if (a == 'L') i--;
            else i++;
        }
        return (!i && !j);
    }
};

int main() {
    string s;
    while (cin >> s) {
        cout << Solution().judgeCircle(s) << endl;
    }
	return 0;
}