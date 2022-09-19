// @before-stub-for-debug-begin
#include "commoncppproblem342.h"
#include <string>
#include <vector>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] 4的幂
 */

// @lc code=start
class Solution {
public:
  bool isPowerOfFour(int n) {
    if (n <= 0)
      return false;
    int r = sqrt(n);
    if (r * r != n)
      return false;
    return (1 << 30) % n == 0;
  }
};
// @lc code=end
