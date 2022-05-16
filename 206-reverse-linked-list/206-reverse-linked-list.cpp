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
    
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
            return head;
        
        vector<int> v;
        ListNode* curr = head;
        while(curr!=nullptr)
        {
            v.push_back(curr->val);
            curr=curr->next;
        }
        reverse(v.begin(),v.end());
        ListNode* head1 = new ListNode(v[0]);
        curr = head1;
        for(int i=1; i<v.size(); i++)
        {
            ListNode* temp = new ListNode(v[i]);
            curr->next = temp;
            curr = temp;
        }
        return head1;
    }
};