# add two numbers (linked list)
# giving a list in reverse order add val and return them as node (math addition) 
# algorithm is to add the nums and their carry and put the sum in new list
# complexity:
# time: O(n)
# space: O(n)

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
from typing import Optional, ListNode
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dummy=ListNode()
        cur=dummy
        carry=0
        
        while l1 or l2 or carry:
            v1=v1.val if v1 else 0
            v2=v2.val if v2 else 0
            val=v1+v2+carry
            
            carry=val//10
            val=val%10
            
            cur.next=ListNode(val)
            cur=cur.next
            l1=l1.next if l1 else None
            l2=l2.next if l2 else None

        return dummy.next

        