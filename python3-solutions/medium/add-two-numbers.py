# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        ans = None
        head = None
        carry = 0
        while (l1 != None) or (l2 != None):
            a = 0
            b = 0
            if (l1 != None):
                a = l1.val
                l1 = l1.next
            if (l2 != None):
                b = l2.val
                l2 = l2.next
            sum = a + b + carry
            carry = sum // 10
            digit = sum % 10
            node = ListNode(digit)
            if(ans == None):
                ans = node
                head = ans
            else:
                head.next = node
                head = head.next
        if (carry != 0):
            node = ListNode(carry)
            head.next = node
            head = head.next
        return ans