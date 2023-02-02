# find min in rotated sorted arr
# giving arr that has been rotated find the min val
# algorithm is by using special kind of binary search
# so we will calc mid and if it was greater than left then we search at right
# else we search to left and our res is min betwean it and cur mid
# complexity:
# time: O(log(n))
# space: O(1)

from typing import List
class Solution:
    def findMin(self, nums: List[int]) -> int:
        res=nums[0]
        l,r=0,len(nums)-1

        while l<=r:
            if nums[l]<nums[r]:
                res=min(res,nums[l])
                break
            mid=(l+r)//2
            res=min(res,nums[mid])
            if nums[mid]>=nums[l]:
                l=mid+1
            else:
                r=mid-1
        return res