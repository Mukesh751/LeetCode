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
    void solve(ListNode* head,int &ans,int &i){
        if(head==NULL)
            return;
        solve(head->next,ans,i);
        ans+= head->val * pow(2,i);
        i++;
    }
    
    
    
    int getDecimalValue(ListNode* head) {
        int ans=0;
        int i = 0;
        solve(head,ans,i);
        return ans;
    }
};