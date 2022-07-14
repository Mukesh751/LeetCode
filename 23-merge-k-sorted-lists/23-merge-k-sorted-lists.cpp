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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;
        if(lists.size() == 0 )
            return nullptr;
        for(auto x : lists){
            while(x != nullptr){
                v.push_back(x->val);
                x = x->next;
            }
        }
        if(v.size() == 0)
            return nullptr;
        sort(v.begin(),v.end());
        ListNode* head = new ListNode(v[0]);
        ListNode* curr = head;
        
        for(int i =1 ; i<v.size(); i++){
            ListNode* temp = new ListNode(v[i]);
            curr->next = temp;
            curr = temp;
        }
        return head;
    }
};