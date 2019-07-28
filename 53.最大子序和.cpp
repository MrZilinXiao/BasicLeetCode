/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         if(nums.empty()) return 0;
//         int max = INT32_MIN, len = nums.size();
//         for(int size = 1;size <= len; size++){
//             for(int i = 0; i < len-size+1; i++){
//                 int sum = 0;
//                 int tmp = size;
//                 while(tmp>0){
//                     sum += nums[i+tmp-1];
//                     tmp --;
//                 }
//                 if(sum > max) max = sum;
//             }
//         }
//         return max;
//     }
// };



