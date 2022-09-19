// @before-stub-for-debug-begin
#include "commoncppproblem268.h"
#include <string>
#include <vector>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 丢失的数字
 */

// @lc code=start
class Solution {
public:
  int missingNumber(vector<int> &nums) {
    int n = nums.size();
    int s = 0;
    for (int i = 0; i < n; i++)
      s += nums[i];
    return (n * (n + 1) / 2 - s);
  }
};
// @lc code=end
