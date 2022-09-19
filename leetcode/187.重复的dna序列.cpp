// @before-stub-for-debug-begin
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=187 lang=cpp
 *
 * [187] 重复的DNA序列
 */

// @lc code=start
class Solution {
public:
  vector<string> findRepeatedDnaSequences(string s) {
    unordered_map<string, int> m;
    vector<string> res;
    for (int i = 0; i + 10 <= s.size(); i++) {
      m[s.substr(i, 10)]++;
    }
    for (auto [s, c] : m)
      if (c > 1)
        res.push_back(s);
    return res;
  }
};
// @lc code=end
