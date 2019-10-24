/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        head->next = deleteDuplicates(head->next);
        if(head->val == head->next->val) head = head->next;
        return head;
        // ListNode* tmp = head;
        // while(head->next!=NULL){
        //     if(head->val==head->next->val){
        //         ListNode* temp = head->next;
        //         head->next = head->next->next;
        //         delete temp;
        //     }else{
        //         head = head->next;
        //     }      
        // }
        // return tmp;
    }
};
// @lc code=end

