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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       if(list1 == nullptr)
           return list2;
    if(list2 == nullptr)
           return list1;
        
           
        vector<int> v;
        ListNode* curr = list1;
        while(curr != nullptr)
        {
            v.push_back(curr->val);
            curr = curr->next;
        }
        curr = list2;
        while(curr != nullptr)
        {
            v.push_back(curr->val);
            curr = curr->next;
        }
        sort(v.begin(),v.end());
        ListNode* ans = new ListNode(v[0]);
        ListNode* prev = ans;
        for(int i = 1; i<v.size(); i++)
        {
            ListNode* newnode = new ListNode (v[i]);
             prev->next = newnode;
            prev = newnode;
        }
        return ans;
    }
};