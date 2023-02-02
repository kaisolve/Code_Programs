# 2d matrix binary search
# giving a matrix find val
# algorithm we do 2 binary search one to get to the row and one to get the val
# complexity:
# time: O(log(n*m))
# space: O(1)

from typing import List
class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        ROS,COLS=len(matrix),len(matrix[0])
        top,bot=0,ROS-1
        while top<=bot:
            row=(top+bot)//2
            if target > matrix[row][-1]:
                top=row+1
            elif target < matrix[row][0]:
                bot=row-1
            else:
                break
        
        if not (top<=bot):
            return False
        
        row=(top+bot)//2
        l,r=0,COLS-1
        while l<=r:
            m=(l+r)//2
            if target> matrix[row][m]:
                l=m+1
            elif target< matrix[row][m]:
                r=m-1
            else:
                return True
        return False
                