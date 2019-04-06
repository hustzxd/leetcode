#include "../../include/solution.h"


class Solution {
public:
    string fractionAddition(string expression) {
        istringstream in(expression);
        int a=0, b=1, c, d;
        char _;
        while (in >> c >> _ >> d) {
            a = a * d + b * c;
            b = b * d;
            int g = abs(gcd(a, b));
            a /= g;
            b /= g;
        }
        return to_string(a) + '/' + to_string(b);
    }
private:
    int gcd(int a, int b) {
        return a !=0 ? gcd(b % a, a) : b;
    }
};


int main() {
	string s;
    while (cin >> s) 
        cout << Solution().fractionAddition(s) << endl;
	return 0;
}