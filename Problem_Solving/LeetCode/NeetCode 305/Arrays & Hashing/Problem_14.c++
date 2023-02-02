// majority element;
// giving an arr, return the num that repeated more then num of arr;
// alforithm sort the arr, return the middle :) ;
// complexity O(n);

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
        }
};


