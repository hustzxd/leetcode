//
// Created by Joey on 2019/3/23.
//

#include<iostream>
#include<vector>

using namespace std;

class solution {
public:
    int reverse(int x) {
        long long res = 0;
        while (x) {
            res = res * 10 + x % 10;
            x /= 10;
        }
        return (res < INT_MIN || res > INT_MAX) ? 0 : res;
    }
};

int main() {
    int x = -321;
    auto solution1 = solution();
    auto result = solution1.reverse(x);
    cout << "input: " << x << "\toutput: " << result << endl;
    return 0;
}