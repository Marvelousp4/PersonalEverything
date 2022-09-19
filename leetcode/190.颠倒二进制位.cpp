// @before-stub-for-debug-begin
#include "commoncppproblem190.h"
#include <string>
#include <vector>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=190 lang=cpp
 *
 * [190] 颠倒二进制位
 */

// @lc code=start
class Solution {
public:
  uint32_t reverseBits(uint32_t n) {
    uint32_t res = 0;
    for (int i = 0; i < 32; i++) {
      res = res * 2 + (n >> i & 1);
    }
    return res;
  }
};
// @lc code=end
