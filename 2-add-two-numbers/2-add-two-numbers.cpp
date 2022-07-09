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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       int carry = 0;
       ListNode* c1 = l1;
       ListNode* prev = l1;
       ListNode* c2 = l2;
       while(l1 != nullptr && l2 != nullptr){
           l1->val = l1->val + l2->val + carry;
           if(l1->val >= 10){
               l1->val -= 10;
               carry = 1;
           }else
               carry = 0;
           
           if(prev == l1)
           l1 = l1->next;
           else{
               l1 = l1->next;
               prev = prev->next;
           }
           l2 = l2->next;
       }
        if(l1 != nullptr){
         while(carry > 0 && l1 != nullptr)
        {
            l1->val = l1->val + carry;
            if(l1->val >= 10){
               l1->val -= 10;
               carry = 1;
           }else
               carry = 0;
             prev = prev->next;
             l1 = l1->next;
        }
        }
        else if (l2 != nullptr){
            prev->next = l2;
        while(carry > 0 && l2 != nullptr)
        {
            l2->val = l2->val + carry;
            if(l2->val >= 10){
               l2->val -= 10;
               carry = 1;
           }else
               carry = 0;
             prev = prev->next; 
             l2 = l2->next;
        }
        }
        
        if(carry>0){
            ListNode* temp = new ListNode(carry);
            prev->next = temp;
        }
       l1 = c1;
        l2 = c2;
      
    
    return l1;
    }
};