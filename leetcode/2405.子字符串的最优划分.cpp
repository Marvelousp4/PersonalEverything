/*
 * @lc app=leetcode.cn id=2405 lang=cpp
 *
 * [2405] 子字符串的最优划分
 */

// @lc code=start
class Solution {
public:
  int partitionString(string s) {
    int ans = 1;
    vector<bool> vis(26);
    for (char c : s) {
      int x = c - 'a';
      if (vis[x])
        ans++, vis.clear(), vis.resize(26);
      vis[x] = true;
    }
    return ans;
  }
};
// @lc code=end
