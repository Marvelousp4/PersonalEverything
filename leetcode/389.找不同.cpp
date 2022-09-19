// @before-stub-for-debug-begin
#include "commoncppproblem389.h"
#include <string>
#include <vector>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
  char findTheDifference(string s, string t) {
    int x = 0;
    for (auto c : s)
      x ^= c;
    for (auto c : t)
      x ^= c;
    return x;
  }
};
// @lc code=end
