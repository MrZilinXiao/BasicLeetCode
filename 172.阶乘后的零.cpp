/*
 * @lc app=leetcode.cn id=172 lang=cpp
 *
 * [172] 阶乘后的零
 */
class Solution {
public:
    int trailingZeroes(int n) {
        int cnt = 0;
        while(n>0){
            cnt += (n/5);
            n = n / 5;
        }
        return cnt;
    }
};

