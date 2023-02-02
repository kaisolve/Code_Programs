// code is to find dublicate numbers;
// return true if there is any;
// return false if there is no;
// complixity O(n);

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,bool>map;

        for (int i=0;i<nums.size();i++) {
            if(map[nums[i]]==true){
            return true; 
            }
            map[nums[i]]=true;

            }
        return false;
    }
}; 

