# Longest Consecutive Sequence
# iving array, give the length of the most Consecutive Sequence
# // algorithm put the arr in set, and compare each item to see if it first of sequance or not
# // if then start counting and searching for the next in set, if there is no next then the length is set as before
# // if not the first then continue to next item
# // finally return the longest which is the max of previous longest and the length
# // complexity O(n)


from typing import List
class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numSet=set(nums)
        longest=0

        for n in nums:
            if(n-1) not in numSet:
                length =1 
                while(n+length) in numSet:
                    length+=1
                longest = max(longest,length)
        return longest


