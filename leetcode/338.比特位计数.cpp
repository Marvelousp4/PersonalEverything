// @before-stub-for-debug-begin
#include "commoncppproblem338.h"
#include <string>
#include <vector>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=338 lang=cpp
 *
 * [338] 比特位计数
 */

// @lc code=start
class Solution {
public:
  vector<int> countBits(int n) {
    vector<int> f(n + 1);
    for (int i = 1; i <= n; i++)
      f[i] = f[i >> 1] + (i & 1);
    return f;
  }
};
// @lc code=end
