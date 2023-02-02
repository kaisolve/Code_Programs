// pascal tringle;
// the idea is to make pascal tringle;
// the algorithm is law that makes pascal tringle posible;
// every element is the sum of two above him;
// so for loop for each row and loop for each elements, apply law, set nums, print the tringle;
// complixity O(n^2);

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0; i<numRows; i++){
            vector<int>row(i+1,1);
            for(int j=1;j<i;j++){
                row[j]=ans[i-1][j-1]+ans[i-1][j];
            }
        ans.push_back(row);
        }
        return ans;        
    }
};