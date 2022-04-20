class Solution {
public:
    string simplifyPath(string path) {
        stack<string> s;
        int n =path.size();
        string ans="";
        
        for(int i=0;i<n;i++){
            if(path[i]=='/') continue;
            
            string temp="";
           
            while(i<n && path[i]!='/'){ //temp = home
                temp += path[i];
                i++;
            }
            
            if(temp == ".") continue;
            else if(temp == ".."){
                if(!s.empty()){
                    s.pop();
                }
            }
            else s.push(temp); // s= emoh, pushing the whole string
        }
        
        while(!s.empty()){
            ans = "/" + s.top() + ans; // /home = ans
            s.pop();
        }
        
        if(ans.size()==0) ans="/";
        
        return ans;
        
        
    }
};
