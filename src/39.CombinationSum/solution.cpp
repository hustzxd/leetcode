#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int> > res;
        vector<int> combination;
        combinationSum_(candidates, target, res, combination, 0);
        return res;
    }
private:
	void combinationSum_(vector<int> &candidates, int target, vector<vector<int> > &res, vector<int> &combination, int begin) {
		if (!target) {
            res.push_back(combination);
            return;
        }
        for (int i = begin; i != candidates.size() && target >= candidates[i]; i++) {
        	combination.push_back(candidates[i]);
        	combinationSum_(candidates, target - candidates[i], res, combination, i);
        	combination.pop_back();
        }
	}
};

int main() {
	vector<int> cand = {2, 3, 6, 7};
	int target = 7;
	vector<vector<int> > res = Solution().combinationSum(cand, target);
	for (auto re : res) {
		cout << "["; 
		for (auto i : re) {
			cout << i << ", ";
		}
		cout << "]" << endl;
	}
	return 0;
}