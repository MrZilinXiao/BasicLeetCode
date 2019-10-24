/*
 * @lc app=leetcode.cn id=434 lang=cpp
 *
 * [434] 字符串中的单词数
 */

// @lc code=start
class Solution {
public:
    int countSegments(string s) {
        s += ' ';
        int cnt = 0;
        for (int i = 0; i < s.size()-1; ++i){
            if(s[i] != ' ' and s[i+1]==' '){
                ++cnt;
            }
        }
        return cnt;
    }
};
// @lc code=end

