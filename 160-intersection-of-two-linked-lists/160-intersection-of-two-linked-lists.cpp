/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         ListNode *ptrA = headA, *ptrB = headB;
    while (ptrA != ptrB) { // loop until we found the first common node
        ptrA = ptrA == nullptr ? headB : ptrA->next; // once we're done with A, move to B
        ptrB = ptrB == nullptr ? headA : ptrB->next; // once we're done with B, move to A
	}
	return ptrA;
    }
};