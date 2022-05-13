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
int length(ListNode* head)
{
if(head == NULL)
{
return 0;
}
int len = 0;
while(head != NULL)
{
head = head->next;
len++;
}
return len;
}

ListNode* reverseKGroup(ListNode* head, int k) {

 if(head == NULL)
 {
     return NULL;
 }
 int len = length(head);
 //cout<<len;
 int itr = len;
 ListNode* nex = NULL;
 ListNode* prev = NULL;
 ListNode* curr = head;
 int c = 0;
 while(curr != NULL & c<k)
 {
     
     nex = curr->next;
     curr->next = prev;
     prev = curr;
     curr = nex;
     c++;
     itr--;
 }

 if(nex != NULL && itr>=k)
 {
     head->next = reverseKGroup(nex,k);
 }
 else{
     head->next = nex;
     return prev;
 }
 
 return prev;
}
};