class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0;
        int e= nums.size()-1;
        int mid, ans = INT_MAX;
        while(s<=e){
            mid = s+(e-s)/2;
            ans = min(ans,nums[mid]);
            
            if(nums[mid]>nums[e]){
                s = mid+1;
            }else{
                e=mid-1;
            }
        }
        return ans;
    }
};
