// @before-stub-for-debug-begin
#include "commoncppproblem201.h"
#include <regex>
#include <string>
#include <vector>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=201 lang=cpp
 *
 * [201] 数字范围按位与
 */

// @lc code=start
#include <stdint.h>
class Solution {
public:
  int rangeBitwiseAnd(int m, int n) {
    int res = 0;
    for (int i = 31; i >= 0; i--) {
      if ((m >> i & 1) != (n >> i & 1))
        break;
      if (m >> i & 1)
        res += 1 << i;
    }
    return res;
  }
};
// @lc code=end
