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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int c = 0;
        ArrayList<Integer> arr = new ArrayList<Integer>();
        while(l1 != null || l2 != null)
        {
            int x;
            if(l1 == null)
            {
            x = l2.val ;
            x += c;
            c = x/10;
            x=x%10;
            arr.add(x);
            l2 = l2.next;
            continue;
            }
            if(l2 == null)
            {
            x = l1.val  ;
            x += c;
            c = x/10;
            x=x%10;
            arr.add(x);
            l1 = l1.next;
            continue;
            }
            x = l1.val + l2.val ;
            x += c;
            c = x/10;
            x=x%10;
            arr.add(x);
            l1 = l1.next;
            l2 = l2.next;
        }
        if(c>0)
            arr.add(c);
        ListNode head = new ListNode(arr.get(0));
        head.next = null;
        ListNode curr = head;
        head.next=curr;
        for(int i=1; i<arr.size(); i++)
        {
            ListNode node = new ListNode(arr.get(i));
            node.next = null;
            curr.next = node;
            curr = node;
        }
        if(curr==head)
            head.next = null;
        
        return head;
    }
}