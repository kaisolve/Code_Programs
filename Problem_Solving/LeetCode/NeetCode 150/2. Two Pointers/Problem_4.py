# max amount of water
# giving arr find max area of it (you better see the problem)
# algorithm is put l,r pointers to left and right
# count area and the res that will return is the max of itself and the last area
# increase l if it's the less height, else decrease r
# complexity:
# time: O(n)
# space: O(1)

from typing import List
class Solution:
    def maxArea(self, height: List[int]) -> int:
        # Linear Time Solution
        res = 0
        l,r=0,len(height)-1
        while l<r:
            area=(r-l)*min(height[l],height[r])
            res=max(area,res)
            if height[l]<height[r]:
                l+=1
            else:
                r-=1
        return res

# BRUTE FORCE solution
# res=0 
# for l in range(len(height)):
#     for r in range(l+1,len(height)):
#         area=(r-l)*min(height[l],height[r])
#         res=max(area,res)
# return res

    
