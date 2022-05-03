class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int p1=0, p2=0;
        
        vector<vector <int>> ans;
        
        int n=firstList.size();
        int m=secondList.size();
        
        while(p1<n && p2<m){
            int s1 = firstList[p1][0], e1 = firstList[p1][1];
            int s2 = secondList[p2][0], e2=secondList[p2][1];
            
            if(max(s1,s2)<=min(e1,e2)){
                ans.push_back({max(s1,s2),min(e1,e2)});
            }
            if(e1>e2) p2++;
            else p1++;
        }
        return ans;
    }
};
