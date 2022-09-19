// @before-stub-for-debug-begin
#include "commoncppproblem78.h"
#include <string>
#include <vector>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */

// @lc code=start
class Solution {
public:
  vector<vector<int>> subsets(vector<int> &nums) {
    vector<vector<int>> res;
    int n = nums.size();
    for (int i = 0; i < 1 << n; i++) {
      vector<int> path;
      for (int j = 0; j < n; j++)
        if (i >> j & 1)
          path.push_back(nums[j]);
      res.push_back(path);
    }
    return res;
  }
};
// @lc code=end
