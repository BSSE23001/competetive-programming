from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
    head: ListNode = ListNode()
    current: Optional[ListNode] = head
    carry: int = 0
    while l1 is not None or l2 is not None or carry:
        sum: int = carry + (l1.val if l1 is not None else 0) + (l2.val if l2 is not None else 0)
        carry = sum // 10
        current.next = ListNode(sum%10)
        current = current.next
        if (l1 is not None):
            l1 = l1.next
        if (l2 is not None):
            l2 = l2.next
    return head.next