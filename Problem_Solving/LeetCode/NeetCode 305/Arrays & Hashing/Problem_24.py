# sort 3 nums arr
# giving arr of 3 unsorted nums, sort them without any library
# algorithm using the partition idea in quick sort
# set 3 pointers, left,right,i
# while i<=r
# if == 0, swap l,i and increament l
# if == 2, swap i,r and decreament r and i(to not fall into problem where i > r and not sorted)
# increamint i
# complexity O(n)

# class Solution:
#     def sortColors(self, nums: List[int]) -> None:
#         """
#         Do not return anything, modify nums in-place instead.
#         """
#         l,r=0,len(nums)-1
#         i=0

#         def swap(i,j):
#             temp=nums[i]
#             nums[i]=nums[j]
#             nums[j]=temp
        
#         while i<=r:
#             if nums[i] == 0:
#                 swap(l,i)
#                 l+=1
#             if nums[i] == 2:
#                 swap(i,r)
#                 r-=1
#                 i-=1
#             i+=1
