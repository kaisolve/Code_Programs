// length of the last word in giving array;
// algorithm is to start at last, skip spaces at first until you find word;
// count it's length stop when you find space;
// complixity O(n);

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        for(int i=s.size()-1;i>=0;i--){
        if(len!=0&&s[i]==' ')
        break;
        if(s[i]==' ')
        continue;
        else
        len++;
        }
        return len;
    }
};