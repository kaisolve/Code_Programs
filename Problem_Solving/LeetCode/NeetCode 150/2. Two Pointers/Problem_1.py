# is palendrom
# giving str return bool as it palendrom or not
# algorithm make two pointer
# first make sure it is alphanum and then check for lower equality
# if not return false else continue iterating and then return true when finish
# complexity:
# time: O(n)
# space: O(1)


class Solution:
    def isPalindrome(self, s: str) -> bool:
       l,r=0,len(s)-1
       while l<r:
        while l<r and not self.alNum(s[l]):
            l+=1
        while r>l and not self.alNum(s[r]):
            r-=1    
        if s[l].lower()!=s[r].lower():
            return False
        l,r=l+1,r-1
       return True

    def alNum(self,c):
        return (ord("A")<=ord(c)<=ord("Z") or
                ord("a")<=ord(c)<=ord("z") or
                ord("0")<=ord(c)<=ord("9"))
    