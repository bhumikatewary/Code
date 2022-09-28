class Solution {
public:
    
     vector<vector<int>> ans;
    void fun(vector<int>& candidates, vector<int>&ds,int index){
       ans.push_back(ds);
      for(int i=index;i<candidates.size();i++){
              ds.push_back(candidates[i]);
              fun(candidates,ds,i+1);
              ds.pop_back();
      }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<int>ds;
      fun(nums,ds,0);
      return ans;
    }
};


