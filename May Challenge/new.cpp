// Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

//Note that after backspacing an empty text, the text will continue empty.


class Solution {
public:
    bool backspaceCompare(string s, string t) {
       stack<char>s1,s2;
		int n=s.size();
		int m=t.size();
		for(int i=0;i<n;i++)
		{
			if(s[i]=='#' and !s1.empty())s1.pop();
			else if(s[i]!='#')s1.push(s[i]);
		}
		for(int i=0;i<m;i++)
		{
			if(t[i]=='#' and !s2.empty())s2.pop();
			else if(t[i]!='#')s2.push(t[i]);
		}
		return s1==s2;
    }
};
