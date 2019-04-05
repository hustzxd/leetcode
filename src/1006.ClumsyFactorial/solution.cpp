#include "../../include/solution.h"


class Solution {
public:
    int clumsy(int N, int inverse=0) {
        if (N >= 4 && !inverse) return N * (N-1) / (N-2) + (N-3) - clumsy(N-4, !inverse);
        else if (N >= 4 && inverse) return N * (N-1) / (N-2) - (N-3) + clumsy(N-4, inverse);
        else if (N == 3) return 3 * 2 / 1;
        else if (N == 2) return 2 * 1;
        else if (N == 1) return 1;
        return 0;
    }
};


int main() {
	int x = 12;
    auto result = Solution().clumsy(x);
    cout << "input: " << x << "\toutput: " << result << endl;
	return 0;
}