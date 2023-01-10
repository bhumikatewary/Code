class Solution {
public:
    string reverseWords(string s) {
        int start=0;
        int end=0;
        for(int i=0;i<=s.size();i++){
            if(s[i]==' ' || i==s.size()){
                end=i-1;
            
            while(start<end){
                swap(s[start++],s[end--]);
            }
            start=i+1;
        }
        }
        return s;
    }
};
