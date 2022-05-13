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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        ListNode* prev = head;
        int size = 0;
        while(curr != nullptr)
        {
            size++;
            if(curr == prev)
            {curr = curr->next;
                continue;}
            
            prev = curr;
            curr = curr->next;
        }
        curr = head;
        prev = head;
        while(curr->next != nullptr)
        {
            
            if(curr == prev)
            {curr = curr->next;
                continue;}
            
            prev = curr;
            curr = curr->next;
        }
        if(size == n)
        {
            return head->next;
        }
        if(n==1)
        {   
            prev->next = nullptr;
            return head;
        }
        
        n = size - n;
        curr = head;
        prev = head;
        
        while(n--)
        {
            if(curr == prev)
            {curr = curr->next;
                continue;}
            
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        return head;
    }
};