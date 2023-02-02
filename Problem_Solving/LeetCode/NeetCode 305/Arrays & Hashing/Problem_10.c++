// remove elements from arr;
// giving an arr, nums try to remove nums from arr and return num of deleted nums;
// here he wants to delete nums;
// so algorithm is for loop to go for each element, if it's our num the pass pointer;
// else put it in our main arr in orders;
// complexity O(n);

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int i=0;
    for(int j=0;j<nums.size();j++){
        if(nums[j]!=val){
            nums[i]=nums[j];
            i++;
        }
    }      
    return i;
    }
};