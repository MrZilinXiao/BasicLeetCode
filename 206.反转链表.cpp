/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    ListNode* reverseList(ListNode* head) {
        // if(head == NULL) return head;
        // else{
        //     head = reverseList(head->next);
        // }
        // ListNode* prev = nullptr;
        // ListNode* curr = head;
        // while(curr != nullptr){
        //     ListNode* nextTmp = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = nextTmp;
        // }
        // return prev;

        // if(head == nullptr or head->next == nullptr){
        //     return head;
        // }
        // ListNode* p = reverseList(head->next);
        // head->next->next = head;
        // head->next = nullptr; // 给后来的递归过程提供标志
        // return p;

        if(head == nullptr){
            return head;
        }
        ListNode* prev = nullptr, *curr = head, *nextPtr = head->next;
        while(nextPtr != nullptr){
            curr->next = prev;
            prev = curr;
            curr = nextPtr;
            nextPtr = nextPtr->next;
        }
        curr->next = prev;
        return curr;
    }
};
// @lc code=end

