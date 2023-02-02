// Two sums;
//first solution;
// giving array and target find 2 indexes which there sum == target;
// algorithm is to set hash map, define compliment (target - arr[i]);
// if the compliment exists return it's index and i;
// else insert i and arr[i] in hash map;
// complixity O(n);

//second solution;
// giving array and target find 2 indexes which there sum == target;
// algorithm is to take num and add to to each number after it and compare sum with target;
// return indexes if true else go to next num and do the same addition;
// complixity O(n^2);

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>map;
       vector<int>result;
       for(int i=0;i<nums.size();i++){
            int complement=target-nums[i];
           if(map.find(complement)!=map.end()){
                result.push_back(map[complement]);
                result.push_back(i);
                break;
           }
            else
            map.insert({nums[i],i});
       }
      
       return result;
  }
};

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int i,j;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j]==target){
//                     return {i,j};
//                 }
//             }
//         }
//         return {i,j};
//     }

// };