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
    void f(ListNode*& one, ListNode* two){
       
       if(two == NULL) return;
       
       
       f(one, two->next);
       
       
       if(one == NULL || one->next == NULL) return;
       
       if(one == two){
           one->next = NULL;
           return;
       }
       
       
       ListNode* temp = one->next;
       
      
       
       one->next = two;
       
       two->next = NULL;
       
       if(two != temp){
           two->next = temp;
       }
       
       one = temp;
   }
    
    
    void reorderList(ListNode* head) {
        
       f(head, head);
        
    }
};