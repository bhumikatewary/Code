class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i,j;
        string ans;
        int n=word1.length();
        int m=word2.length();
        
        while(i<n && j<m){
           ans+=word1[i++];
           ans+=word2[j++];
        }
        
        if(i<n) ans+=word1.substr(i);
        if(j<m) ans+=word2.substr(j);
        
        return ans;
    }
};
