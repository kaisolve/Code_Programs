# reverse linked list
# algorithm get two pointers and reverse the arrow to the next iteratively and then return pointer to display the list
# complexity:
# time: O(n)
# space: O(1) 
# 
# the second algorithm is using recursion
# set the newHead to last node as head
# set the address in the next node to head to head
# set head next to none
# return new head 

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
from typing import ListNode, Optional
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr,prev=head,None
        while curr:
            temp=curr.next
            curr.next=prev
            prev=curr
            curr=temp
        return prev 

        # z=a
        # a=b
        # b=c
        # c=z
        # so c=a and a=b and b=c swapping 3 items z is temporary variable


class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head:
            return None

        newHead=head
        if head.next :
            newHead=self.reverseList(head.next)
            head.next.next=head
        head.next=None
        return newHead