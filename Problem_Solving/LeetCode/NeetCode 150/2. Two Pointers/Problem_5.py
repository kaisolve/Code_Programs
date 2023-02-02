# amount of water than can hold when rain
# 
# First Hard Problem (: 
# 
# giving arr, find the amount of water can store (see pic in question)
# algorithm first set l,r pointer , use them to solve the equation res=max(l,r)-height[i]
# this equation will solve the problem so the l,r pointer will set and increase the leaset of them
# also there is max l,r to update it
# complexity:
# time: O(n)
# space: O(1)

from typing import List
class Solution:
    def trap(self, height: List[int]) -> int:
        if not height: return 0
        l,r,res=0,len(height)-1,0
        leftMax,rightMax=height[l],height[r]
        
        while l<r:
            if leftMax<rightMax:
                l+=1
                leftMax=max(leftMax,height[l])
                res+=leftMax-height[l]
            else:
                r-=1
                rightMax=max(rightMax,height[r])
                res+=rightMax-height[r]
        return res
                
