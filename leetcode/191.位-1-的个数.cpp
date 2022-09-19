// @before-stub-for-debug-begin
#include "commoncppproblem191.h"
#include <string>
#include <vector>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */

// @lc code=start
class Solution {
public:
  int hammingWeight(uint32_t n) {
    int a = 0;
    while (n)
      n -= n & -n, a++;
    return a;
  }
};
// @lc code=end
