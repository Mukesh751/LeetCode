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
   
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> v;
        ListNode* curr = head;
        while(curr!=NULL)
        {
            v.push_back(curr->val);
            curr = curr->next;
        }
        int j = 0;
        for(int i=k; i<=v.size(); i+=k)
        {
            reverse(v.begin()+j,v.begin()+i);
            j+=k;
        }
        ListNode* newhead;
        ListNode* cur = new ListNode(v[0]);
        newhead = cur;
        ListNode* prev = cur;
        for(int i=1;i<v.size(); i++)
        {

        ListNode* cur1= new ListNode(v[i]);
        prev->next=cur1;
        prev = cur1;
        }
        return newhead;
    }
};