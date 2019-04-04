#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <sstream>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef vector<int> VI;
typedef pair<int,int> PII;

#define REP(i,s,t) for(int i=(s);i<(t);i++)
#define MAXE(v) *max_element(v.begin(), v.end())

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        REP(i, 1, nums.size()) {
            if(nums[i-1]>0) nums[i] += nums[i-1];
        }
        return MAXE(nums);
    }
};

int main() {
	VI nums = {-2,1,-3,4,-1,2,1,-5,4};
	cout << Solution().maxSubArray(nums) << endl;
	return 0;
}