#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int tail = s.length() - 1;
        while (tail >= 0 && s[tail] == ' ') tail--;
        while (tail >= 0 && s[tail] != ' ') {
        	tail--;
        	len++;
        }
        return len;
    }
};

int main() {
	auto so = Solution();
	vector<string> strs = {"string", "hello world", "ddd "};
	for (auto s : strs) {
		cout << s << ": " << so.lengthOfLastWord(s) << endl;
	}
	return 0;
}