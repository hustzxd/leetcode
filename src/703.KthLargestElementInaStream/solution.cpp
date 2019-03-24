#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> pq;
    int size;
public:
    KthLargest(int k, vector<int> nums) {
        size = k;
        for (auto num : nums) {
            pq.push(num);
            if (pq.size() > size) pq.pop();
        }
    }

    int add(int val) {
        pq.push(val);
        if (pq.size() > size) pq.pop();
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */

int main() {
    int k = 3;
    vector<int> arr = {4, 5, 8, 2};
    auto kthLargest = new KthLargest(k, arr);
    cout << kthLargest->add(3) << endl;   // returns 4
    cout << kthLargest->add(5) << endl;   // returns 5
    cout << kthLargest->add(10) << endl;  // returns 5
    cout << kthLargest->add(9) << endl;   // returns 8
    cout << kthLargest->add(4) << endl;   // returns 8
    return 0;
}