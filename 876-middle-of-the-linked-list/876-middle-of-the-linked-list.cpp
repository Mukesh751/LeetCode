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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        int count = 0;
        while(true)
        {
            if(fast->next == nullptr)
            {
                count = 1;
                break;
            }
            if( fast->next->next == nullptr)
            {
                count = 2;
                break;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        if(count%2 == 1)
            return slow;
        
        return slow->next;
    }
};