class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.length();
        if(n==0) return 0;
        int m=haystack.length();
        
        for(int i=0; i<m+1-n;i++){
           if(haystack.substr(i,n)==needle)
               return i;
        }
        return -1;
    }
};
