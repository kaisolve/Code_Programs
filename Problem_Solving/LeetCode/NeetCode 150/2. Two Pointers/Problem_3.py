# 3sums
# giving arr return the sum of 3 elements that equals to 0
# algorithm now we want to get 3 sums the best way to do it is
# to use our knowledge in 2 sums and 2 sums ||
# so what we will do is to sort the arr and then go for each num and as in 2sums|| set two pointers l,r
# so the num we in is a and the two pointers is b,c and the threeSum must==0
# so we should increase l and decrease r as < or > then 0
# also we should make sure that the num not be repeated
# also we should increase left pointer after each iteration to be after a
# complexity: 
# time: O(n^2)
# space: O(1)
from typing import List
class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res=[]
        nums.sort()
        for i,a in enumerate(nums):
            if i>0 and a==nums[i-1]:
                continue
            l,r=i+1,len(nums)-1
            while l<r:
                threeSum=a+nums[l]+nums[r]
                if threeSum < 0:
                    l+=1
                elif threeSum > 0:
                    r+=1
                else:
                    res.append([a,nums[l],nums[r]])
                    l+=1
                    while nums[l]==nums[l-1] and l<r:
                        l+=1
        return res