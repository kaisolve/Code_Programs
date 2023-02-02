# longest substring in arr without repeating vhar
# giving arr, find the longost substring without doublecates
# algorithm using technique sliding window, we set a set and
# add char to it if not in, and calc our res 
# if it is in it then we remove left and add the right, l+=1
# and we update res to be max between it and r-l+1
# 
# another algorithm is using also sliding but with different implementation
# make string = '' , if ch is not in it then add it, else slide it to throw the left and add right
# and count will be len of string
# complexity:
# time: O(n)
# space: O(n)
# 
# complexity:
# time: O(n)
# space: O(1)

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        charSet = set()
        l=0
        res=0
        for r in range(len(s)):
            while s[r] in charSet:
                charSet.remove(s[l])
                l+=1
            charSet.add(s[r])
            res=max(res,r-l+1)
        return res
        
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s)==1: return 1
        count, s_result = 0,''
        for i in s:
            if i not in s_result:
                s_result+=i
            else:
                s_result=s_result[s_result.index(i)+1:]+i
            if len(s_result)>=count:
                count=len(s_result)
        return count
        
                