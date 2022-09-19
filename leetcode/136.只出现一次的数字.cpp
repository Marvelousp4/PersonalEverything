// @before-stub-for-debug-begin
#include "commoncppproblem136.h"
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
class Solution {
public:
  int singleNumber(vector<int> &nums) {
    int a = 0;
    for (auto i : nums)
      a ^= i;
    return a;
  }
};
// @lc code=end
