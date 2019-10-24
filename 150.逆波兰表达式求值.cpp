/*
 * @lc app=leetcode.cn id=150 lang=cpp
 *
 * [150] 逆波兰表达式求值
 */

// @lc code=start
class Solution {
public:
int evalRPN(vector<string>& tokens) {
    stack<int> numStack;
    auto it = tokens.begin();
    while(it != tokens.end()){
        if(*it!="+" && *it!="-" && *it!="*" && *it!="/"){
            numStack.push(atoi((*it).c_str()));
        }else{
            int op2 = numStack.top();numStack.pop();
            int op1 = numStack.top();numStack.pop();
            if(*it == "+") numStack.push(op1 + op2);
            else if(*it == "-") numStack.push(op1 - op2);
            else if(*it == "*") numStack.push(op1 * op2);
            else if(*it == "/") numStack.push(op1 / op2);
        }
        it++;
    }
    if(numStack.size() == 1) return numStack.top();
    return -1;
}
};
// @lc code=end

