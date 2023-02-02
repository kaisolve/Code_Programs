# design stack and get min in o(1) time
# algorithm first we design stack using built in fun stack 
# then we get min of entered val to stack and last min
# (put two of them in new stack) this will be easy to push and pop
# complexity:
# time: O(1)
# space: O(1 or n)

class MinStack:

    def __init__(self):
        self.stack=[]
        self.minst=[]

    def push(self, val: int) -> None:
        self.stack.append(val)
        val=min(val,self.minst[-1] if self.minst else val)
        self.minst.append(val)

    def pop(self) -> None:
        self.stack.pop()
        self.minst.pop()

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        return self.minst[-1]