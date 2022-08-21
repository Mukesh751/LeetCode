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
    ListNode* rotateRight(ListNode* head, int k) {
        int n = 0;
        ListNode* last;
        ListNode* curr = head;
        while(curr != nullptr){
            last = curr;
            curr = curr->next;
        
            n++;
        }
        
        if(k == 0 || head == nullptr || head->next == nullptr)
            return head;
        k = k%n;
        int t = (n-k);
        curr= head;
        ListNode* prev = nullptr;
        last->next = head;
        while(t--){
            if(prev == nullptr)
                prev = curr;
            else
                prev = prev->next;
            curr = curr->next;
        }
        cout<<curr->val<<" "<<prev->val;
        prev->next = nullptr;
        return curr;
    }
};