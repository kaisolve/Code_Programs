// unique emails;
// in this problem giving an arr of strings return num of unique emails;
// as you skip any '.' in local name;
// skip '+' and what after it until '@' in local name;
// and return num of uniques;
// algorithm is easy, skip '.', break afret '+' or '@';
// store char in new string and store each email in a {set};
// return size of set as it restores only unique emails;
// compleity O(n^2);

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
    set<string>st;
    for(int i=0;i<emails.size();i++){
        string CleanEmail="";
        string email=emails[i];
        for(int j=0;j<email.size();j++){
            if(email[j]=='.')
            continue;
            else if(email[j]=='+'||email[j]=='@')
            break;
            CleanEmail+=email[j];
        }
        CleanEmail+=email.substr(email.find('@'),email.size()-1);
        st.insert(CleanEmail);
    }
    return st.size();
    }
};

