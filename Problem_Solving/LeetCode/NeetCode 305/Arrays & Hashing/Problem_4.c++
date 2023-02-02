// is subsequance;
// subsequance mean that the first is in the second and in the same order;
// we compare the second with the first, increase size of the second at every time;
// increase size of the first if we find it in second;
// compare size of first with size of num known;
// if equal then true else false; 
// complixity O(n);

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
         for(int i=0; i<t.size();i++){
             if(t[i]==s[j])
             j++;
         }   
        
        return j==s.size();
    }
};