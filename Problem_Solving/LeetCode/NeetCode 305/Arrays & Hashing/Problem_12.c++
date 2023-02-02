// isomorphic strings;
// giving 2 strings, if a char has relation with another char more than once then not iso else it is iso
// algorithm will check every char and stor it in map;
// there is two maps for one for each string;
// compare them and return bool;
// the other algorithm will compare in maps between char and int;
// compare the output of each map;
// the addition/adding is {i+1};
// complexity O(n);

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
       map<char,char>map1;
       map<char,char>map2;
       for(int i=0; i<s.size();i++){
        if(map1[s[1]]&&map1[s[i]]!=t[i]||map2[t[i]]&&map2[t[i]]!=s[i])
        return false;
       map1[s[i]]=t[i];
       map2[t[i]]=s[i];
       }
    return true;
    }
};

// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         map<char,int>map1;
//         map<char,int>map2;
//         for(int i=0;i<s.size();i++){
//             if(map1[s[i]]!=map2[t[i]]){
//                 return false;
//             }
//             map1[s[i]]=i+1;
//             map2[t[i]]=i+1;
//     }
//     return true;}
// };


// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//        map<char,int>ss;
//         map<char,int>tt;
//         for(int i=0;i<s.size();i++){
//         if(ss[s[i]]!=tt[t[i]])
//         return false;
               
//             ss[s[i]]=i+1;
//             tt[t[i]]=i+1;
            
            
//         }
//         return true;
//     }
// };
