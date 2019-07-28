/*
 * @lc app=leetcode.cn id=204 lang=cpp
 *
 * [204] 计数质数
 *
 * https://leetcode-cn.com/problems/count-primes/description/
 *
 * algorithms
 * Easy (26.95%)
 * Total Accepted:    15.3K
 * Total Submissions: 56.4K
 * Testcase Example:  '10'
 *
 * 统计所有小于非负整数 n 的质数的数量。
 * 
 * 示例:
 * 
 * 输入: 10
 * 输出: 4
 * 解释: 小于 10 的质数一共有 4 个, 它们是 2, 3, 5, 7 。
 * 
 * 
 */
/*
class Solution {
public:
    bool isPrime(int k){
        if(k==2||k==3)
        return true;
        for(int i = 2; i <= sqrt(k);i++){
            if(k%i==0) return false;
        }
        return true;
    }
    int countPrimes(int n) {
        int cnt = 0;
        for(int i = 2;i<n;i++){
            if(isPrime(i))
            cnt++;
        }
        return cnt;
    }
};
*/
class Solution {
public:
    bool isPrime(int k){
        for(int i = 2; i <= sqrt(k);i++){
            if(k%i==0) return false;
        }
        return true;
    }
    int countPrimes(int n) {
        bool pArray[n+1]={0};
        int cnt = 0;
        for(int i = 2;i<n;i++){
            if(!pArray[i] && isPrime(i)){
                cnt++;
                for (int j = i; j<n; j+=i) pArray[j]=true;
            }
        }
        return cnt;
    }
};
