/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // 最终递归方案
        if(l1==NULL) return l2;
        else if(l2==NULL) return l1;
        else if(l1->val<l2->val){
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }else{
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
        // 迭代式
        // ListNode* pre = new ListNode(-1);
        // ListNode* prev = pre;
        // while(l1!=NULL && l2!=NULL){
        //     if(l1->val<=l2->val){
        //         prev->next = l1;
        //         l1 = l1->next;
        //     }else{
        //         prev->next = l2;
        //         l2 = l2->next;
        //     }
        //     prev = prev->next; // 自己也要前进一步
        // }
        // prev->next = l1 != NULL ? l1 : l2; // 接上最后一个元素
        // return pre->next;

        // 自己想的憨批方法
        // int first;
        // if(l1->val<=l2->val) {
        //     first = l1->val;
        //     l1 = l1->next;   
        // }
        // else{
        //     first = l2->val;
        //     l2 = l2->next;
        // }
        // ListNode* l3 = new ListNode(first);
        // ListNode* init = l3;
        // while(l1!=NULL && l2!=NULL){
        //     if(l1->val<=l2->val){
        //         l3->next = new ListNode(l1->val);
        //         l1 = l1->next;
        //     }else{
        //         l3->next = new ListNode(l2->val);
        //         l2 = l2->next;
        //     }
        //     l3 = l3->next;
        // }
        // while(l1!=NULL){
        //     l3->next = new ListNode(l1->val);
        //     l1 = l1->next;
        //     l3 = l3->next;
        // }
        // while(l2!=NULL){
        //     l3->next = new ListNode(l2->val);
        //     l2 = l2->next;
        //     l3 = l3->next;
        // }
        // return init;

        // 递归式

    }
};
// @lc code=end

