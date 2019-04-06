#include "../../include/solution.h"


class Solution {
public:
    int numMatchingSubseq(string S, vector<string>& words) {
        int res = 0;
        auto pairs_base = get_pairs(S);

        for (auto word : words) {
            auto pairs_ref = get_pairs(word);
            int i = 0;
            for (auto p_base : pairs_base) {
                if (p_base.first == pairs_ref[i].first) {
                    pairs_ref[i].second -= p_base.second;
                    if (pairs_ref[i].second <= 0) i++;
                    if (i == pairs_ref.size()) break;
                }
            }
            if (i == pairs_ref.size()) {
                res++;
                cout << res << ". " << word << endl;
            }
        }
        return res;
    }
    int numMatchingSubseq2(string S, vector<string>& words) {
        int res = 0;
        for (auto word : words) {
            int i = 0;
            for (auto c : S) {
                if (c == word[i]) i++;
                if (i == word.size()) break;
            }
            if (i == word.size()) {
                res++;
                cout << res << ". " << word << endl;
            }
        }
        return res;
    }

private:
    vector<pair<char, int> > get_pairs(string s) {
        char last_char = s[0];
        vector<pair<char, int> > pairs;
        pairs.push_back(make_pair(last_char, 1));
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == last_char) pairs[pairs.size() - 1].second += 1;
            else {
                last_char = s[i];
                pairs.push_back(make_pair(last_char, 1));
            }
        }
        return pairs;
    }
};

int main() {
	string S = "cocs";
    vector<string> words = {"ccs"};
    auto result = Solution().numMatchingSubseq(S, words);
    cout << "output: " << result << endl;
    auto result2 = Solution().numMatchingSubseq2(S, words);
    cout << "output: " << result2 << endl;
	return 0;
}