// @before-stub-for-debug-begin
#include "commoncppproblem401.h"
#include <string>
#include <vector>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=401 lang=cpp
 *
 * [401] 二进制手表
 */

// @lc code=start
class Solution {
public:
  vector<string> readBinaryWatch(int num) {
    vector<string> res;
    char str[10];
    for (int i = 0; i < 1 << 10; i++) {
      int s = 0;
      for (int j = 0; j < 10; j++)
        if (i >> j & 1)
          s++;
      if (s == num) {
        int a = i >> 6, b = i & 63;
        if (a < 12 && b < 60) {
          sprintf(str, "%d:%02d", a, b);
          res.push_back(str);
        }
      }
    }
    return res;
  }
};
// @lc code=end
