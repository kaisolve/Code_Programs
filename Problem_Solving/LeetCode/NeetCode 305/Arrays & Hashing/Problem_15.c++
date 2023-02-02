// find pivot index;
// giving vector, return index of num where left of it == right;
// algorithm is to get sum of elements in right, and compare it with left (set = 0);
// if equal return index, else remove the index from right and add to left 
//?  remove first, compare second and add last;
// return -1 if there is no pivot element;
//? we insert 0 in first and end to sure we not out of bound;
// complexity O(n*log(n));

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int left,right=0;
       nums.insert(nums.begin(),0);
       nums.push_back(0)
       for(int i=1;i<nums.size()-1,i++){
        right+=nums[i];
       }
       for(int i=1;i<nums.size()-1,i++){
        right-=nums[i];
        if(left==right)
          return i-1;
        left+=nums[i];
       }
       return -1;
       }
};