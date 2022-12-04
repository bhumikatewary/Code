class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
       //NlogN tc, two-pointer approach
        
        sort(nums.begin(),nums.end()); //first we sort the array
        int count=0;
        int i=0; int j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j]==k){
                i++;
                j--;
                count++;
            }else if(nums[i]+nums[j]>k){
                j--;
            }else{
                i++;
            }
        }
        return count;
    }
};



//OR

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        //O(n) tc, using maps
        
        int n=nums.size();
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<n;i++){
            if(mp[k-nums[i]]>0){
                count++;
                mp[k-nums[i]]--;
            }else{
                mp[nums[i]]++;
            }
        }
        return count;
    }
};
