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
    ListNode* deleteDuplicates(ListNode* head) {
       set<int> s;
        if(head==nullptr || head->next==nullptr)
            return head;
        ListNode* curr = head;
        ListNode* prev = head;
        while(curr != nullptr)
        {
            if(curr == prev)
                curr=curr->next;
            
            if(curr->val == prev->val)
            {
                prev->next = curr->next;
                curr = curr->next;
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};