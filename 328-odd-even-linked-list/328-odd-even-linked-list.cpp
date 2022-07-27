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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head == nullptr || head->next == nullptr)
            return head;
        
        ListNode* odd = head;
        ListNode* even = head->next;
        
        ListNode* curr_odd = odd;
        ListNode* curr_even = even;
        
        ListNode* curr = head->next->next;
        int i = 3;
        while(curr != nullptr){
            if(i%2 == 1){
                curr_odd->next = curr;
                curr_odd = curr;
            }
            if(i%2 == 0){
                curr_even->next = curr;
                curr_even = curr;
            }
            curr = curr->next;
            i++;
        }
        curr_odd->next = even;
        curr_even->next = nullptr;
        
        return odd;
    }
};