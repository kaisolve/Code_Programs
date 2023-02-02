// word pattern;
// giving two strings one of single char as pattern and one with strings;
// find pattern ass ["abbs"]==["cat,dog,dog,horse"];
// algorithm two maps to compare, vector to split and string stream to do spliting and word string to store strings;
// complexity O(n);

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // two maps to compare;
        map<char,string>CharToWord;
        map<string,char>WordToChar;

        // vector to split;
        vector<string>vec;
        // string to store;
        string word;
        //string stream to do spliting;
        stringstream is_s(s);

        //do spliting;
        while(is_s >> word)
            vec.push_back(word);
        
        if(vec.size() != pattern.size())
            return false;
        for(int count=0;count<vec.size();count++){
            string word;
            word=vec[count];
            if(CharToWord[pattern[count]] != "" && CharToWord[pattern[count]] != word)
                return false;
            if(WordToChar[word] && WordToChar[word] != pattern[count])
                return false;
            CharToWord[pattern[count]]=word;
            WordToChar[word]=pattern[count];
        }
        return true;
    }
};