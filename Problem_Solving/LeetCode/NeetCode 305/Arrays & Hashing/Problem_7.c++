// long prefix;
// giving array of characters find long prefix in them;
// algorithm is to set prefix as first char, compare it with the second;
// return new prefix as it is empty if no prefix;
// return new prefix as sub of the first char;
// you return when the char is full || there is a single char not equal to las word;
// complixity O(n) / O(n*m) ;
// this complixity is due to you loop in one direction set char loop in it's elements and then go to next;

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string prefix="";
    for(int index=0;strs.size()>0;prefix+=strs[0][index],index++)
        for(int i=0;i<strs.size();i++)
            if(index>=strs[i].size() || (i>0 && strs[i][index] != strs[i-1][index]))
            return prefix;
    return prefix;
    }
};