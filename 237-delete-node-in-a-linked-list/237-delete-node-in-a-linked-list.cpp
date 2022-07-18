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
    void deleteNode(ListNode* node) {
        ListNode* curr = node->next;
        ListNode* prev = node;
        ListNode* pp = prev;
        while(curr != nullptr){
            int temp = curr->val;
            curr->val = prev->val;
            prev->val = temp;
            
            if(pp != prev)
                pp = prev;
            
            prev = curr;
            curr = curr->next;
            
        }
        cout<<pp->val;
        pp->next = nullptr;
        
    }
};