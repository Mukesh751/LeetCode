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
    ListNode* deleteDuplicates(ListNode* head) {
        
         ListNode* temp1 = new ListNode(1);
        ListNode* temp2 = temp1;
        if(head==NULL || head->next==NULL) 
            return head;
        while(head!=NULL){
            ListNode* temp = head;
            head = head->next;
            while(head && head->val==temp->val) 
                head = head->next;
            if(temp->next==head) {
                temp->next = NULL;
                temp2->next = temp;
                temp2 = temp2->next;
            }
        }
        return temp1->next;
    }
};