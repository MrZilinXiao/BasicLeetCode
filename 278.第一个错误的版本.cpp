/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        while(left<=right){
            int mid = left + (right - left)/2;
            if(!isBadVersion(mid)){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        return left;
    }
};

