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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* curr = head;
        vector<int> v;
        int sum = 0;
        while(curr != nullptr){
            
            curr = curr->next;
            if(curr == nullptr)
                break;
            while(curr->val)
                sum+=curr->val,
                curr=curr->next;
            
            v.push_back(sum);
            sum = 0;
        }
        ListNode* head2 = new ListNode(v[0]);
        curr = head2;
        for(int i = 1; i<v.size(); i++){
            ListNode* temp = new ListNode(v[i]);
            curr->next = temp;
            curr = temp;
        }
        return head2;
    }
};