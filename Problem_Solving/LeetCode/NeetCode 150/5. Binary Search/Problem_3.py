# Koko Eating Bananas
# giving arr of piles and time , vind min speed which you can eat all piles at time less than h
# algorithm we will do binary search to find the less k
# get hours and compare to givin h and move pointers
# complexity:
# time: O(log(max(p))*p)
# space: O(1)

from typing import List
from math import math
class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l,r=1,max(piles)
        res=r
        while l<=r:
            k=(l+r)//2
            hours=0
            for p in piles:
                hours+=math.ceil(p/k)
            if hours<=h:
                res=min(res,k)
                r=k-1
            else:
                l=k+1
        return res
