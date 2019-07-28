/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 *
 * https://leetcode-cn.com/problems/move-zeroes/description/
 *
 * algorithms
 * Easy (53.24%)
 * Total Accepted:    40.3K
 * Total Submissions: 75.7K
 * Testcase Example:  '[0,1,0,3,12]'
 *
 * 给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
 * 
 * 示例:
 * 
 * 输入: [0,1,0,3,12]
 * 输出: [1,3,12,0,0]
 * 
 * 说明:
 * 
 * 
 * 必须在原数组上操作，不能拷贝额外的数组。
 * 尽量减少操作次数。
 * 
 * 
 */
/*
解法1：
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0;
        vector<int> flag;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==0){
                flag.push_back(i);
                cnt++;
            }
        }
        for(int j = 0; j < flag.size(); j++){
            nums.erase(nums.begin()+(flag[j]-j));
        }
        while(cnt--){
            nums.push_back(0);
        }
    }
};
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;  
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]  != 0){
                if(k != i)
                    swap(nums[i],nums[k]);
                k++;
            }
        }            
    }
};

