// num of ballons;
// giving string of char, find num of word[ballon] that can be made using this string;
// algorithm make map and store each char nad it's apear time;
// put num of apearing in each char;
// get the min num of apearing;
// complexity O(nlogn);

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>mp;
        for(int i=0;i<text.size();i++)
            mp[text[i]]++;
            int b=mp['b'];
            int a=mp['a'];
            int l=mp['l']/2;
            int o=mp['o']/2;
            int n=mp['n'];
        return min({a,b,l,o,n});
    }
};

