/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

class Solution {
public:
    int BinSearch(vector<int>& numbers, int left, int right, int target){
        int mid;
        while(left<=right){
            mid = left + (right-left)/2;
            if(numbers[mid]==target) return mid;
            else if(numbers[mid]<target) left = mid+1;
            else if(numbers[mid]>target) right = mid-1;
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        for(int i = 0; i < numbers.size(); i++){
            int tmpTarget = target - numbers[i];
            int secondIndex = BinSearch(numbers,i+1,numbers.size()-1,tmpTarget);
            if(secondIndex!=-1){
                result.push_back(i+1);
                result.push_back(secondIndex+1);
                break;
            }
        }
        return result;
    }
};

