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
        while(curr != nullptr)
        {
            s.insert(curr->val);
            curr = curr->next;
        }
        ListNode* head1 = new ListNode(-1000);
        curr = head1;
        for(auto x : s)
        {
            ListNode* temp = new ListNode(x);
            curr->next = temp;
            curr=temp;
            if(head1->val == -1000)
                head1=curr;
            
        }
        return head1;
    }
};