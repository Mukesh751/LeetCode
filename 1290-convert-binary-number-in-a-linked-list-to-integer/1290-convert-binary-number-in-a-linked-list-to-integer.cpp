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
    int getDecimalValue(ListNode* head) {
        int n = 0 ;
        ListNode* curr = head;
        while(curr != nullptr)
        {
            n++;
            curr = curr->next;
        }
        n--;
        curr = head;
        int ans = 0;
        while(curr != nullptr)
        {
            ans += curr->val * pow(2,n);
            curr = curr->next;
            n--;
        }
        return ans;
    }
};