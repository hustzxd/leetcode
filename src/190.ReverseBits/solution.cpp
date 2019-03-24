#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        for (int i = 0; i < 32; i++) {
            res = (res << 1) + (n >> i & 1);
        }
        return res;
    }
};

int main() {
    Solution s1 = Solution();
    uint32_t n = 4294967293;
    cout << s1.reverseBits(n) << endl;
    return 0;
}