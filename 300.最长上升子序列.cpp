/*
 * @lc app=leetcode.cn id=300 lang=cpp
 *
 * [300] 最长上升子序列
 */

// @lc code=start
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.empty()) return 0;
        int dp[nums.size()];
        fill(dp, dp + nums.size(), 1);
        int res = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                if(nums[j]<nums[i]){
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
            if(dp[i]>res) res = dp[i];
        }
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     if(dp[i]>res) res = dp[i];
        // }
        return res;
        
    }
};
// @lc code=end

