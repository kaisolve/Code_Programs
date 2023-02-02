# sliding window max
# giving arr and len of slide window, return arr of outputs contain each max of the slide window (it moves by one)
# algorithm is by using queue to add elements if they less than last in queue 
# pop left if added val is greater then left val 
# also increase l,r of window to move through arr
# complexity:
# time: O(n)
# space: O(n)

from typing import List
import collections
class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]: 
        output=[]
        q=collections.deque()
        l=r=0

        while r < len(nums):

            # pop left element if it is less than r
            while q and nums[q[-1]] < nums[r]:
                q.pop()
            q.append(r)
            
            # pop the most left val 
            if l>q[0]:
                q.popleft()

            # add to output
            if (r+1) >= k:
                output.append(nums[q[0]])
                l+=1 
            r+=1
        return output
