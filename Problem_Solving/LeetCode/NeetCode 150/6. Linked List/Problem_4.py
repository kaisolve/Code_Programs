# delete nth node from the end of list
# algorithm is to add 2 pointers to reach the node we wanna del
# and then we del it but we will make a dummy node to reach it the right way
# complexity:
# time: O(n)
# space: O(1)

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
from typing import Optional,ListNode
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:  
        dummy=ListNode(0,head)
        l,r= dummy,dummy.next

        while n>0 and r:
            r=r.next
            n-=1
        
        while r:
            r=r.next
            l=l.next
        
        # delete
        l.next=l.next.next
        return dummy.next