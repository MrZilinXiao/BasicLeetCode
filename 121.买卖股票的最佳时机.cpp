/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1) return 0;
        int Min = prices[0], Max = 0;
        for(int i = 1; i<prices.size(); i++){
            Max = max(Max, prices[i]-Min);
            Min = min(Min, prices[i]);
        }
        return Max;
    }
};

