class Solution {
public:
    
    int help(int i, string &s, unordered_set<string> &st, string temp){
        if(i==s.size()) return 0;
        else
        {
            temp+=s[i];                  // temp mein letters ko daalo
            int opt1= INT_MIN/2;        //avoiding overflow
            int opt2= INT_MIN/2;
            if(st.find(temp)==st.end()) //agar st mein temp nahi hai toh
            {
                st.insert(temp);        //st mein temp ko insert kardo
                opt1=1+help(i+1,s,st," "); //recursive fn.
                st.erase(temp);         //part of backtracking
            }
            opt2=help(i+1,s,st,temp);
            return max(opt1,opt2);
        }
    }
    int maxUniqueSplit(string s) {
        unordered_set<string> st;
        return help(0,s,st," ");
    }
};
