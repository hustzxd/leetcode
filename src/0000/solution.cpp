#include "../../include/solution.h"


class Solution {
public:
    int reverse(int x) {
        long long res = 0;
        while (x) {
            res = res * 10 + x % 10;
            x /= 10;
        }
        return (res < INT_MIN || res > INT_MAX) ? 0 : res;
    }
};


int main() {
	int x = -321;
    auto result = Solution().reverse(x);
    cout << "input: " << x << "\toutput: " << result << endl;
	return 0;
}