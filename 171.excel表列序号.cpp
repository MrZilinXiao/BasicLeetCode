/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel表列序号
 */
class Solution {
public:
    int titleToNumber(string s) {
        int len = s.length();
        int digits = len-1;
        int sum = 0;
        while(digits>=0){
            sum += pow(26,digits)*(s[len-digits-1]-'A'+1);
            digits--;
        }
        return sum;
    }
};

