/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapNodes(ListNode head, int k) {
        ListNode start=head;
        ListNode current=head;
        ListNode end=head;
        int t=k;
        t--;
        int n=1;
        while(current.next!=null)
        {
            current=current.next;
            n++;
        }
        current=head;
        while(t>0)
        {
            t--;
            current=current.next;
        }
        start=current;
        t=n-k;
        current=head;
        System.out.print(t);
        while(t>0)
        {
            t--;
            current=current.next;
        }
        end=current;
        int temp = start.val;
        start.val = end.val;
        end.val = temp;
        return head;
    }
}