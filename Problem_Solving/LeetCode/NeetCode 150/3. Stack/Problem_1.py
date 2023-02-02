# valid prantathes
# giving arr of strings check if the prantathes is valid (rules is in question)
# algorithm is to using stack to add open pra and map to make sure that the close has open
# see code
# complexity:
# time: O(n)
# space: O(n)

class Solution:
    def isValid(self, s: str) -> bool:
        stack=[]
        CloseToOpen={")":"(","]":"[","}":"{"}
        for c in s:
            if c in CloseToOpen:
                if stack and stack[-1]==CloseToOpen[c]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(c)
        return not stack