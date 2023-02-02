# Longest Repeating Character Replacement
# giving arr of strings and num of replacement you can make, return longest repeating char
# algorithm look we will use slide window, set hashmap to count the each char
# set maxf to be max of maxf & current char num in hashmap
# set res to be max of len of our window and res 
# while diff between len of window and maxf is<k 
# then decrease current num in hashmap and shift l pointer
# complexity:
# time: O(n)
# space: O(1)

class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        count={}
        res=0
        l=0
        maxf=0
        for r in range(len(s)):
            count[s[r]]=1+count.get(s[r],0)
            maxf=max(maxf,count[s[r]])
            while (r-l+1)-maxf<k:
                count[s[l]]-=1
                l+=1
            res=max(res,r-l+1)
        return res