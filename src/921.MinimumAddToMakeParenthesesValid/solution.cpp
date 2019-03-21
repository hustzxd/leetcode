//
// Created by Joey on 2019/3/21.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int minAddToMakeValid(string S) {
        int num_left = 0;
        int num_right = 0;
        for (int i = 0; i < S.size(); i++) {
            if (S[i] == '(') {
                num_left++;
            } else { // ')'
                if (num_left > 0)
                    num_left--;
                else
                    num_right++;
            }
        }
        return (num_left + num_right);
    }
};

int main() {
    Solution S;
    string s1 = "((()))))(((((";
    cout << s1 << endl;
    int result = S.minAddToMakeValid(s1);
    cout << result << endl;
    return 0;
}
