# find duplicate in a linked list
# giving cycled list find duplicates 
# algorithm is floyed's algorithm by using 3 pointers
# 2 of them to indicate the first intersect 
# the third to find the first of the cycle which is our duplicate
# complixity:
# time: O(n) 
# space: O(1)

from typing import List  
class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        slow,fast=0,0
        while True:
            slow=nums[slow]
            fast=nums[nums[fast]]
            if slow==nums:
                break
        
        slow2=0
        while True:
            slow=nums[slow]
            slow2=nums[slow2]
            if slow==slow2:
                return slow
            
        
