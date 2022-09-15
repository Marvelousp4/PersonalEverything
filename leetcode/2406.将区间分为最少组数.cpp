/*
 * @lc app=leetcode.cn id=2406 lang=cpp
 *
 * [2406] 将区间分为最少组数
 */
// @lc code=start
class Solution {
public:
  int minGroups(vector<vector<int>> &intervals) {
    sort(intervals.begin(), intervals.end());
    // 维护一个小根堆表示所有组的结束时间
    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto &vec : intervals) {
      // 判断是否存在一组（结束时间最小的组）使得它的结束时间小于当前区间的开始时间
      if (!pq.empty() && pq.top() < vec[0])
        pq.pop();
      pq.push(vec[1]);
    }
    return pq.size();
  }
};

// @lc code=end
