# evaluate RPN (see code description)
# algorithm make stack, add num to it, pop and do operation
# push again the answer 
# return the remained element in stack after finishing
# complexity:
# time: O(n)
# space: O(n)

from typing import List
class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for c in tokens:
            if c == "+":
                stack.append(stack.pop()+stack.pop())
            elif c=="-":
                a,b=stack.pop(),stack.pop()
                stack.append(b-a)
            elif c=="*":
                stack.append(stack.pop()*stack.pop())
            elif c=="/":
                a,b=stack.pop(),stack.pop()
                stack.append(int(b/a))
            else:
                stack.append(int(c))
        return stack[0]