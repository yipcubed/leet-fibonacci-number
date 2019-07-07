#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>

// https://leetcode.com/problems/fibonacci-number/

#include "../utils/VectorUtils.hpp"
// #include "../utils/TreeUtils.hpp"

#include "../utils/PrintUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto _no_sync_ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int fib(int n) {
        static vector<int> memo(31);
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (memo[n] == 0)
            memo[n] = fib(n - 1) + fib (n - 2);
        return memo[n];
    }
};

void test1() {

    cout << "2 ? " << Solution().fib(3) << endl;
    cout << "3 ? " << Solution().fib(4) << endl;
}

void test2() {

}

void test3() {

}