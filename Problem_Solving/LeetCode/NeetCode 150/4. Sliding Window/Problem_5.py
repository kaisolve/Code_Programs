# minimum window substring
# giving 2 strings find minimum window in the first that have substring of second
# algorithm is to make 2 hashset to compare and use window to go through first string
# after initialize 2 sets we start increasing our window untill we have the same num of char in s2 to be in s1
# then we pop from left untill s1 char in window be less than s2 char and add chars again untill end
# complexity:
# time: O(n)
# space: O(n)

class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if t=="" : return ""
        
        countT,window={},{}
        
        for c in t:
            countT[c]=1+countT.get(c,0)
        
        have,need=0, len(countT)
        res,resLen=[-1,-1], float("infinity")
        l=0
        for r in range(len(s)):
            c=s[r]
            window[c]=1+window.get(c,0)
            if c in countT and window[c]==countT[c]:
                have+=1
                
            while have == need:
                # update our result
                if (r-l+1) < resLen:
                    res=[l,r]
                    resLen= (r-l+1)
                
                # pop char from window to get min resLen
                window[s[l]]-=1
                if s[l] in countT and window[s[l]] < countT[s[l]]:
                    have-=1
                l+=1
        l,r=res
        return s[l:r+1] if resLen!=("infinity") else ""