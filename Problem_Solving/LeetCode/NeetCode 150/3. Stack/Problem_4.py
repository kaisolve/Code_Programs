# Generate Parentheses
# giving n try to make valid well formed prarentheses arr
# algorithm using recursion ,set open,close,s give them default 0,0,""
# then if open<n do recursion and add ( to s else close < open add ) to s
# the other solution stands on recursion and adding to stack and then pop from it
# complexity:
# time: O(n)
# space: O(n) 

from typing import List
class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        def gps(left,right,s):
            if len(s)==n*2:
                res.append(s)
                return
            if left<n:
                gps(left+1,right,s+'(')
            if right<left:    
                gps(left,right+1,s+')')
        res=[]
        gps(0,0,'')
        return res

        # stack=[]
        # res=[]
        # def backtrack(openP,closeP,s):
        #     if len(s)==n*2:
        #         res.append(s)
        #         return
        #     if openP<n:
        #         stack.append("(")
        #         backtrack(openP+1,closeP,s+'(')
        #         stack.pop()
        #     if closeP<openP:
        #         stack.append(")")
        #         backtrack(openP,closeP+1,s+')')
        #         stack.pop()
        # backtrack(0,0,"")
        # return res