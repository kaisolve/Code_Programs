# Daily Temperatures
# giving arr of temp find fay needed to get greater temp
# algorithm is to make stack add temp and index in it
# go for loop and when current temp is greater than one last then pop it 
# then add difference between indexes to result array  

from typing import List
class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        res=[0]*len(temperatures)
        stack=[] # pairs : [tem,ind]
        for i,t in enumerate(temperatures):
            while stack and t>stack[-1][0]:
                stackT,stackInd=stack.pop()
                res[stackInd]=(i-stackInd)
            stack.append([t,i])
        return res

        