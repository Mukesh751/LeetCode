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
        
    ListNode* curr1 = list1;
    ListNode* curr2 = list2;
    ListNode* prev = nullptr;
    
    while(curr1!=nullptr && curr2!=nullptr)
    {
        if(curr1->val <= curr2->val)
        {
            prev = curr1;
            curr1 = curr1->next;
        }
        else
        {
            ListNode* temp = curr2;
            curr2 = curr2->next;
            if(prev == nullptr)
            {temp->next = curr1;
             list1 = temp;
            }
            else
            {temp->next = prev->next;
                prev->next = temp;}
            prev = temp;
        }
    }
        if(curr2 == nullptr)
            return list1;
        
        curr1 = prev;
        curr1->next = curr2;
        
        return list1;
    }
};