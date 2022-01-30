class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int mid;
        int e=n-1;
        while(s<=e){
         mid=s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                e=mid-1;
            }else{
                s=mid+1;
                 }
        }
          if(nums[mid]<target){
              return mid+1;
          }
        return mid;
        }
};
