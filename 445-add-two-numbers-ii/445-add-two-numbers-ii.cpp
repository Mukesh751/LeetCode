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
    ListNode* add(ListNode* l1, ListNode* l2) {
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
    
    ListNode* reverse(ListNode* l1){
        if(l1 == nullptr || l1->next == nullptr)
            return l1;
        
        ListNode* temp = reverse(l1->next);
        l1->next->next = l1;
        l1->next = nullptr;
        return temp;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr = l1;
        int size1 = 0;
        while(curr != nullptr){
            curr = curr->next;
            size1++;
        }
         curr = l2;
        int size2 = 0;
        while(curr != nullptr){
            curr = curr->next;
            size2++;
        }
        ListNode* prev = nullptr;
        ListNode* head1 = prev;
        while(size1<size2){
            
               ListNode* temp = new ListNode(0);
            if(prev == nullptr)
            {prev = temp;
             head1 = prev;
            }
            else
            {
                prev->next = temp;
                prev = temp;
            }
            size1++;
        }
        if(prev != nullptr)
            prev->next = l1;
        else
            head1 = l1;
        
         prev = nullptr;
        ListNode* head2 = prev;
        while(size1>size2){
            
            ListNode* temp = new ListNode();
            if(prev == nullptr)
            {  prev = temp;
               head2 = prev;
            }
            else
            {
                prev->next = temp;
                prev = temp;
            }
            //cout<<prev->val<<head2->val;
            size2++;
        }
        if(prev != nullptr)
            prev->next = l2;
        else
            head2 = l2;
        
        // while(head1 != nullptr){
        //     cout<<head1->val<<" ";
        //     head1 = head1->next;
        // }
        // cout<<endl;
        // while(head2 != nullptr){
        //     cout<<head2->val<<" ";
        //     head2 = head2->next;
        // }
        
        return reverse(add(reverse(head1),reverse(head2)));
    }
};