# leetcode
> This is just a summary of algorithmic exercise, most of the code is inspired by leetcode discussion.

```bash
g++ -o myprogram solution.cpp -std=c++11
./myprogram
# debug on mac
g++ -o myprogram solution.cpp -std=c++11 -g
lldb myprogram
```


### c++ head
```cpp
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

const int INF = (int)1E9;
#define MAXN 100005
```
