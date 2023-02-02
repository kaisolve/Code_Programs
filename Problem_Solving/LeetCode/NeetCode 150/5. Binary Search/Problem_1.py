# binary search
# giving sorted arr try to find target
# algorithm is using binary search (without recursion)
# notice equation mid=l+((r-1)//2) as (l+r)//2 will cause overflow
# complexity:
# time: O(log n)
# space: O(1)

from typing import List
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l,r=0,len(nums)-1
        while l<=r:
            # avoide the overflow in other languages like c++ by using mid=(l+r)//2 we used the equation below
            # here we have (r-l)//2 which is half the distance and by addiing l to it you get the middle exactily
            mid=l+((r-l)//2)
            if nums[mid]>target:
                r=mid-1
            elif nums[mid]<target:
                l=mid+1
            else:
                return mid
        return -1
