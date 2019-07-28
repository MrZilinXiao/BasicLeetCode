/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 求众数
 */
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> cnt;
        for(int i = 0;i < nums.size();i++){
            cnt[nums[i]]++;
            if(cnt[nums[i]]>(nums.size()/2))
                return nums[i];
        }
        return -1;
    }
};

