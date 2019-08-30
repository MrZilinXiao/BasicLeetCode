/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
 */
class Solution {
public:
    string convertToTitle(int n) {
        string result = "";
        while(n){
            int modNum = n % 26;
            n = n / 26;
            if(modNum==0){
                n-=1;
                modNum = 26;
            }
            char ch = 'A'-1;
            result = char(ch+modNum) + result;
        }
        return result;
    }
};

