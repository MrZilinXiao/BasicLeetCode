/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 *
 * https://leetcode-cn.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (32.61%)
 * Total Accepted:    70.9K
 * Total Submissions: 216.2K
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * 编写一个函数来查找字符串数组中的最长公共前缀。
 * 
 * 如果不存在公共前缀，返回空字符串 ""。
 * 
 * 示例 1:
 * 
 * 输入: ["flower","flow","flight"]
 * 输出: "fl"
 * 
 * 
 * 示例 2:
 * 
 * 输入: ["dog","racecar","car"]
 * 输出: ""
 * 解释: 输入不存在公共前缀。
 * 
 * 
 * 说明:
 * 
 * 所有输入只包含小写字母 a-z 。
 * 
 */
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";
        if(strs.size()==1)
            return strs[0];
        int index = 0 ;
        for (int i = 0; i < strs[0].length();i++){
            char cur = strs[0][index];
            for(int j = 1; j<strs.size();j++){
                string str = strs[j];
                if(str.length()==i||cur!=str[index]){
                    return strs[0].substr(0,index);
                }
            }
            index++;
        }
        return strs[0];
    }
};

