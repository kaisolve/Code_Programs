# mid of two sorted arr as they were merged
# giving 2 sorted arr find min between them
# algoritm is to set left and right partition of each arr
# and find if they are under certain conditions and apply binary search to get the mid
# complexity:
# time: O(log(min(m,n))) 
# space: O(1)

from typing import List
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        # set two arr to A,B and find total also get half, and set A to be the smallest
        A,B = nums1,nums2
        # total and half will be used to set left and right partition for each arr
        total=len(nums1)+len(nums2)
        half=total//2
        if len(B)<len(A):
            A,B=B,A
        
        # set the pointers and start binary search
        l,r=0,len(A)-1
        while True:

            # set i,j as A,B pointers to set our two partitions for each arr
            i=(l+r)//2 #A
            j=half-i-2 #B

            # set left, right partition for each arr
            Aleft=A[i] if i>=0 else float("-infenity")
            Aright=A[i+1] if (i+1)<len(A) else float("infinity")
            Bleft=B[j] if j>=0 else float("-infinity")
            Bright=B[j+1] if (j+1)<len(B) else float("infinity")

            # check if partition is correct
            if Aleft<=Bright and Bleft<=Aright:
                #odd
                if total%2:
                    return min(Aright,Bright) 
                #even
                return (max(Aleft,Bleft)+min(Aright,Bright))/2
            elif Aleft>Bright:
                r=i-1
            else:
                l=i+1
            
            
            
            
           
    