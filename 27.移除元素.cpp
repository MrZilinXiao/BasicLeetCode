/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        for(int i = 0; i< len;i++){
            if(val==nums[i]){
                nums.erase(nums.begin()+i);
                len--;
                i--;
            }
        }
        return len;
    }
};

