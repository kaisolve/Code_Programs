# maxarea of rectangle in histogram
# giving arr of height with each height has width of 1, find max area
# notice the we compute area untill we found height less than ours
# algorithm make stack, and add to it pairs of index,height
# if the current height greater than next then pop the i,h and get maxarea
# also after finishing the arr then compute maxarea for elements which still in stack
# complexity:
# time: O(n)
# space: O(n)

from typing import List
class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        maxArea=0
        stack=[]
        for i,h in enumerate(heights):
            start=i
            while stack and stack[-1][1]>h:
                index,height=stack.pop()
                maxArea=max(maxArea,height*(i-index))
                start=index
            stack.append((start,h))
        for i,h in stack:
            maxArea=max(maxArea,h*(len(heights)-i))
        return maxArea