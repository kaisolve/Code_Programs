// Find All Numbers Disappeared in an Array;
// giving an arr of nums, return numbers in the range of [1,n] that not in arr;
// algorithm as arr is from [0,n-1] & range is [1,n];
// then set int j to be new index, and j=nums[i]-1;
// and then set the nums[j] =nums[i] * -1;
// and then ask for the positive nums in the arr, and put ther index+1 int res;
// return res;
// complexity O(n);

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    for(int i=0;i<nums.size();i++){
       int j=abs(nums[i])-1;
       nums[j]=abs(nums[j])*-1;
    }
    vector<int>res;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            res.push_back(i+1);
        }
        
    }
   return res;
   }
   
};