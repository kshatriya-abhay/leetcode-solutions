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
        ListNode ans = null;
        ListNode head = null;
        int carry = 0;
        while((l1 != null) || (l2 != null)) {
            int a = 0, b = 0;
            if (l1 != null) {
                a = l1.val;
                l1 = l1.next;
            }
            if (l2 != null) {
                b = l2.val;
                l2 = l2.next;
            }
            int sum = a + b + carry;
            carry = sum / 10;
            int digit = sum % 10;
            ListNode node = new ListNode(digit);
            if(ans == null) {
                ans = node;
                head = ans;
            }
            else {
                head.next = node;
                head = head.next;
            }
        }
        if (carry != 0) {
            ListNode node = new ListNode(carry);
            head.next = node;
            head = head.next;
        }
        return ans;
    }
}