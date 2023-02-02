// is anagram;
// using giving 2 strings, compare them and see is the second string is anagram of the first;
// i used two algorithms;
// first one is to sort the two and then compare each one of them;
// second is to create hashmap and then give counter to count each character and anothe one to minus them for the second string;
// and then if there is character counter != 0 then return false;
//? sort function use the best algorithm for the number given;
// complixity O(n);

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
      
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;

        }
         
    
    bool isAnagram(string s, string t) {
    unordered_map<char,int> counts;
        for(int i=0;i<s.length();i++){
            counts[s[i]]++;
            counts[t[i]]--;}
        for(auto count:counts)
            if(count.second) return false;
        return true;   


    }
};