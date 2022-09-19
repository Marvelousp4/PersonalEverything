// @before-stub-for-debug-begin
#include "commoncppproblem231.h"
#include <string>
#include <vector>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2 的幂
 */

// @lc code=start
class Solution {
public:
  bool isPowerOfTwo(int n) { return n > 0 && (n & -n) == n; }
};
// @lc code=end
