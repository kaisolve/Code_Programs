# valid sudoku
# giving soduko board return false or true baised on it's correctness
# algorithm is to check if each rows[r] or cols[c] or squars[(r//3,c//3)] is in the board or not
# then add them to the board if not exist
# return true if non rule been broken
# complexity:
# time: O(n^2)
# space: O(n)
 
from typing import List
from typing import collections
class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        cols = collections.defaultdict(set)
        rows = collections.defaultdict(set)
        squars = collections.defaultdict(set)

        for r in range (9):
            for c in range (9):
                if(board[r][c] in "."):
                    continue
                if(board[r][c] in rows[r] or
                   board[r][c] in cols[c] or
                   board[r][c] in squars[(r//3,c//3)]):
                   return False
                rows[r].add(board[r][c])
                cols[c].add(board[r][c])
                squars[(r//3,c//3)].add(board[r][c])
        return True

