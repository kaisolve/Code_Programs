// Group anagram;
// int this proble giving vector of strings, sort them in vector of vectors each has anagram strings;
// algorithm is to make map of strings and vectors, for loop for the giving vector;
// store string in new string variable, sort it and it will be reference;
// and the following strings will be as follow, if anagrm then store it in sutable mab row, else set specific row for it as reference;
// and then strore map vectors in new vector of vectors;
// complexity O(nlog(n));

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            map[s].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto it:map){
            ans.push_back(it.second);
        }
        return ans;

    }
};