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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;
        ListNode* prev = head;
        while(curr != nullptr)
        {
            if(curr == prev && curr->val == val)
            {
                prev = prev->next;
                curr = curr->next;
                head = prev;
            }
            else if(curr == prev)
               curr = curr->next;
            else
            {
                if(curr->val == val)
                {
                    curr = curr->next;
                    prev->next = curr;
                    
                }
                else{
                    prev = curr;
                    curr = curr->next;
                }
            }
        }
        return head;
    }
};