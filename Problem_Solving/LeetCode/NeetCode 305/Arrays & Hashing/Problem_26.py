# min breaks in wall
# giving a wall, try to find min breaks in it
# note wall here is num of nums in arr
# algorithm going in each row of the wall get the num of gaps
# add one to the curren pos in map
# the res is the length of wall - max of map values

class Solution(object):
    def leastBricks(self, wall):
        """
        :type wall: List[List[int]]
        :rtype: int
        """
        countGap={0:0} # map between pos and count
        for r in wall:
            total=0
            for b in r[:-1]:
                total+=b
                countGap[total]=1+countGap.get(total,0)
        return len(wall)-max(countGap.values())

        
