// product of arr except itself;
// giving vector get product of each element in arr except that element;
//? note: no (/) accepted, complexity= O(n);
// algorithm set empty vector res and give it size of nums.size() and default value of 1 in each index;
// go forward and put the prefix product of each element in the res arr;
// ge back and put the postfix product * the element in res;
// return res;
// complexity O(n);

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res(nums.size(),1);
        int prefix = 1;
        for(int i=0;i<nums.size();i++){
            res[i]=prefix;
            prefix *=nums[i];
        }
        int postfix = 1;
        for(int i=nums.size()-1;i>=0;i--){
            res[i] *=postfix;
            postfix *=nums[i];
        }
        return res;
    }
};