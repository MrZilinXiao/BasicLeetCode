/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 缺失数字
 */
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // map<int,bool> hashMap;
        // int max = INT_MIN;
        // for(int i = 0; i<nums.size(); i++){
        //     hashMap[nums[i]] = true;
        //     if(nums[i]>max){
        //         max = nums[i];
        //     }
        // }
        // for(int j = 0; j <= max; j++){
        //     if(hashMap.find(j)==hashMap.end()){
        //         return j;
        //     }
        // }
        // return nums.size();
        /** Method 1 Sum **/
        // long long sum = 0;
        // int n = nums.size();
        // for(int i = 0; i < n; i++){
        //     sum += nums[i]; 
        // }
        // long long realsum = (n*(n+1))/2;
        // return realsum - sum;
        /** Method 2**/
        int res = nums.size();
        for(int i = 0; i < nums.size(); i++){
            res ^= nums[i];
            res ^= i;
        }
        return res;
    }
};

