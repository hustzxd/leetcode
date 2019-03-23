//
// Created by Joey on 2019/3/21.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string> &A) {
        vector<int> cnt(26, INT_MAX);
        vector<string> res;
        for (auto str : A) {
            vector<int> cnt1(26, 0);
            for (auto c : str) ++cnt1[c - 'a'];
            for (auto i = 0; i < 26; i++) cnt[i] = min(cnt1[i], cnt[i]);
        }
        for (auto i = 0; i < 26; i++) {
            for (auto j = 0; j < cnt[i]; j++)
                res.push_back(string(1, 'a' + i));
        }
        return res;
    }
};

int main() {
    Solution s1;
    vector<string> A = {"bella","label","roller"};
    for (auto str : s1.commonChars(A)) {
        cout << str << endl;
    }
    return 0;
}
