class Solution {
public:
    
    void subsets(vector<int>&nums,vector<int>output,int index,vector<vector<int>>&ans, bool pre)
    {
        if(index==nums.size())
        {              // only that values of output are stored in ans where index is >=nums size not all values will be added
            ans.push_back(output);
            return;
        }
        
        //excludes elements of nums so no other value is added in output vector
        subsets(nums,output,index+1,ans, false);
        
        if(index>0 && nums[index]==nums[index-1] && (!pre) ) return;
        
        //includes  elements of nums in output vector
        output.push_back(nums[index]); //push the value of nums at index in output vecotor
        subsets(nums,output,index+1,ans, true);
        output.pop_back();
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         vector<vector<int>> ans;
         vector<int> output;
         subsets(nums,output,0,ans, false);
         return ans;   
    }
};



// OR

class Solution {
public:
    vector<vector<int>> ans;
    void fun(vector<int>& candidates, vector<int>&ds,int index){
       ans.push_back(ds);
      for(int i=index;i<candidates.size();i++){
           if(i>index&&candidates[i]==candidates[i-1])continue;
              ds.push_back(candidates[i]);
              fun(candidates,ds,i+1);
              ds.pop_back();
      }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      vector<int>ds;
      sort(nums.begin(),nums.end());
      fun(nums,ds,0);
      return ans;
    }
};
