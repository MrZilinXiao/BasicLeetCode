/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */
class Solution {
public:
    char findTheDifference(string s, string t) {
        int result = 0;
        for(auto i:s) result ^= i;
        for(auto j:t) result ^= j;
        return result;
    }
};

