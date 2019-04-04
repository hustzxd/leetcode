#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string toLowerCase(string str) {
        int len = str.length();
        for (int i = 0; i < len; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
        }
        return str;
    }
};

int main() {
	vector<string> strs = {"HASEDedf", "FiirndDVZ"};
	for (auto str : strs) {
		cout << str << ": " << Solution().toLowerCase(str) << endl;
	}
	return 0;
}
