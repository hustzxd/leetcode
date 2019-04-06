


## Time Limit Exceeded
```c++
class Solution {
public:
    int numMatchingSubseq(string S, vector<string>& words) {
        int res = 0;
        for (auto word : words) {
            int i = 0;
            for (auto c : S) {
                if (c == word[i]) i++;
                if (i == word.size()) break;
            }
            if (i == word.size()) res++;
        }
        return res;
    }
};

```