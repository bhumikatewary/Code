class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> ans;
        int s = 0;
        int res = -1;
        int e = nums.size()-1;
        
        //finding the starting number index
        
        while(s<=e){
           int mid = s+(e-s)/2;
            
            if(nums[mid]==target){
                res = mid;
                e = mid -1;
            }
            else if(nums[mid]>target)
                    e = mid - 1;
                else
                   s = mid+1;
            }
        ans.push_back(res);
        
        
        //finding ending number index
         s = 0;
        res = -1;
        e = nums.size()-1;
        
        while(s<=e){
          int  mid = s+(e-s)/2;
            
            if(nums[mid]==target){
                res = mid;
                s = mid + 1;
            }else if (nums[mid]>target)
                e = mid - 1;
            else
                s = mid+1;
        }
        
        ans.push_back(res);
        
            return ans;
        }
    
};
