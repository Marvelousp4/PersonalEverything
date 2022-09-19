// @before-stub-for-debug-begin
#include "commoncppproblem260.h"
#include <string>
#include <vector>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=260 lang=cpp
 *
 * [260] 只出现一次的数字 III
 */

// @lc code=start
class Solution {
public:
  int get(vector<int> &nums, int k, int t) {
    int res = 0;
    for (auto x : nums)
      if ((x >> k & 1) == t)
        res ^= x;
    return res;
  }
  vector<int> singleNumber(vector<int> &nums) {
    int ab = 0;
    for (auto x : nums)
      ab ^= x;
    int k = 0;
    while ((ab >> k & 1) == 0)
      k++;
    return {get(nums, k, 0), get(nums, k, 1)};
  }
};
// @lc code=end