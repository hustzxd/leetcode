#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>

using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
		static unordered_set<int> n = {6, 28, 496, 8128, 33550336};
    	// if (num == 1) return false;
    	// vector<int> divisors;
    	// int end_max = num;
    	// divisors.push_back(1);

    	// for (int i = 2; i < num & i < end_max; i++) {
    	// 	if (num % i == 0) {
    	// 		divisors.push_back(i);
    	// 		end_max = num / i;
    	// 		if (end_max > i) divisors.push_back(end_max);
    	// 	}
    	// }
    	// int sum_ = 0;
    	// for (auto n : divisors) {
    	// 	sum_ += n;
    	// }
     //    return sum_ == num;
    	return n.count(num);
    }
};

int main() {
	auto s1 = Solution();
	cout << INT_MAX << endl;
	vector<int> nums = {1, 2, 3, 4, 28, 100};
	for (auto i = 1; i < 100000000; i++) {
		if (s1.checkPerfectNumber(i)) cout << i << endl;
		// cout << num << ": " << s1.checkPerfectNumber(num) << endl;
	}
	return 0;
}