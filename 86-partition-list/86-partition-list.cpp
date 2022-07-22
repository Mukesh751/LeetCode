/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head == nullptr || head->next == nullptr)
            return head;
        ListNode* small = nullptr;
        ListNode* large = nullptr;
        ListNode* small_head = nullptr;
        ListNode* large_head = nullptr;
        
        ListNode* curr = head;
        while(curr!=nullptr){
            if(curr->val<x){
                if(!small){
                    small = curr;
                    small_head = small;
                }
                else
                {small->next = curr;
                 small = small->next;
                }
            }
            else{
                 if(!large){
                    large = curr;
                    large_head = large;
                }
                else
                {   large->next = curr;
                   large = large->next;
                }
            }
            curr = curr->next;
        }
        if(!small_head)
          return large_head;
        
        small->next = large_head;
        if(large)
        large->next = nullptr;
        
        return small_head;
    }
};