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
  ListNode* findMid(ListNode* head){
    
    ListNode* slow = head;
    ListNode* fast = head;
    
    while(fast and fast->next){
        
        slow = slow->next;
        fast = fast->next->next;
    }
    
    
    return slow;
}

ListNode* reverseList(ListNode* head){
    
    ListNode* pre = NULL;
    ListNode* curr = head;
    ListNode* nex = head;
    
    while(nex){
        
        nex = nex->next;
        curr->next = pre;
        pre = curr;
        curr = nex;
    }
    
    return pre;
    
}


void mergeList(ListNode* head1, ListNode* head2){
    
    ListNode* temp = head1;
    head1 = head1->next;
    
    bool flag = false;
    
    while(head1 and head2){
        
        if(flag){
            
            temp->next = head1;
            head1 = head1->next;
            
        }
        else{
            temp->next = head2;
            head2 = head2->next;
        }
        
        temp = temp->next;
        flag = !flag;
        
    }
    
    if(head1){
        temp->next = head1;
    }
    else{
        temp->next = head2;
    }
}


void reorderList(ListNode* head) {
    
    ListNode* mid = findMid(head);
    
    ListNode* head1 = head;
    ListNode* head2 = reverseList(mid->next);
    mid->next = NULL;
    
    mergeList(head1, head2);
    
}
};