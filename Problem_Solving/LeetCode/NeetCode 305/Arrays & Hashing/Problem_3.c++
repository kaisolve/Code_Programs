// Replace Elements with Greatest Element on Right Side;
// here i use algorithm of setting the last element as max;
// set the one on the left as max;
// comparing the new element in left with old max to set new max;
// complixity O(n);

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    int size=arr.size();
    int mx=-1;
    for(int i=size-1;i>=0;i--){
        int n=arr[i];
        arr[i]=mx;
        mx=max(n,mx);
    }
    return arr;
    }

};