// Runtime=12ms, Memory=6.7MB

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i])
                return t[i];
        }
        return t[t.size()-1];
    }
};

// Runtime=0ms, Memory=6.7MB
class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        for(int i=0;i<t.size();i++){
            if(s[i]!=t[i])
                return t[i];
        }
        return t[s.size()-1];
    }
};

// Runtime=7ms, Memory=6.6MB

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        for(int i=0;i<t.size();i++){
            if(s[i]!=t[i])
                return t[i];
        }
        return t[s.size()];
    }
};

// Runtime=10ms, Memory=6.8MB

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        for(int i=0;i<t.size();i++){
            if(s[i]!=t[i])
                return t[i];
        }
        return t[t.size()-1];
    }
};
