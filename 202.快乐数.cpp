/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */
class Solution {
public:
    bool isHappy(int n) {
        int fast = n, slow = n;
        do{
            slow=squareSum(slow);
            fast=squareSum(fast);
            fast=squareSum(fast);
        }while(fast!=slow);
        if(fast==1) return true;
        else return false;
    }
    int squareSum(int v){
        int sum = 0;
        while(v>0){
            sum += (v%10)*(v%10);
            v = v / 10;
        }
        return sum;
    }
};

