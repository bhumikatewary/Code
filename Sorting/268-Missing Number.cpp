class Solution {
public:
     int missingNumber(vector<int>& nums) {
         int l=nums.size()-1;
         sort(nums.begin(),nums.end());
         int n=nums[l];
         int i;
         for( i=0;i<=n;i++){
             if(i!=nums[i]){
                 return i;
             }
         }
         return i;

     }
};
