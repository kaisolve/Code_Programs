# car fleet
# giving arr of pos, arr of speed return num of fleets
# car fleet when one reach the other
# algorithm is to first sort pairs of pos & speed
# make stack add to it the time of the first car
# compair the next car time if bigger then add it to stack knowing that it will be fleet
# return stack lenth which will be tru ass times in it is for cars that will be fleet
# complexity:
# time: O(n)
# space: O(n)

from typing import List
class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        stack=[]
        for pos, vel in sorted(zip(position,speed))[::-1]:
            dist=target-pos
            if not stack:
                stack.append(dist/vel)
            elif dist/vel>stack[-1]:
                stack.append(dist/vel)
        return len(stack)