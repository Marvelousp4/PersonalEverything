/*
 * @Author: Marvelousp4 573335988@qq.com
 * @Date: 2022-09-19 20:05:12
 * @LastEditors: Marvelousp4 573335988@qq.com
 * @LastEditTime: 2022-09-19 20:10:41
 * @FilePath: \leetcode\1636.按照频率将数组升序排序.cpp
 * @Description:
 *
 * Copyright (c) 2022 by Marvelousp4 573335988@qq.com, All Rights Reserved.
 */
/*
 * @lc app=leetcode.cn id=1636 lang=cpp
 *
 * [1636] 按照频率将数组升序排序
 */

// @lc code=start
#include <unordered_map>
class Solution {
public:
    std::vector<int> frequencySort(std::vector<int>& nums)
    {
        std::unordered_map<int, int> m;
        for (int& num : nums)
            m[num]++;
        sort(nums.begin(), nums.end(), [&](const int a, const int b) {
            if (m[a] != m[b]) {
                return m[a] < m[b];
            }
            return a > b;
        });
        return nums;
    }
};
// @lc code=end
