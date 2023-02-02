# two sums without extra memory
# giving sorted arr find sum of two indexes that return target
# algorithm is to set two pointers l,r and then get cursum and then compare it to target 
# if > decrease the right pointer
# if < increase the left pointer
# else return the indexes + 1 as in problem
# complexity:
# time: O(n)
# space: O(1)

from typing import List
class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        l,r=0,len(numbers)-1
        while l<r:
            curSum=numbers[l]+numbers[r]
            if curSum > target:
                r-=1
            elif curSum < target:
                l+=1
            else:
                return [l+1,r+1]
                    