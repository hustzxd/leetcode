#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long long sum = 0, tmp = x;
        while (tmp > 0) {
        	sum = sum * 10 + tmp % 10;
        	tmp /= 10;
        }
        return (sum == x);
    }
};

int main() {
	string line;
	while (getline(cin, line)) {
		int x = stoi(line);
		cout << Solution().isPalindrome(x) << endl;
	}
}