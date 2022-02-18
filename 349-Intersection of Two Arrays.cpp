//Method 1

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> nums3;
       int l1=nums1.size();
       int l2=nums2.size();
        
        for(int i=0;i<l1;i++){
            for(int j=0;j<l2;j++){
                if(nums1[i]==nums2[j]){
                   nums3.push_back(nums1[i]);
                }
                
            }
        }
        
        nums3.erase(unique(nums3.begin(),nums3.end()),nums3.end());  
        return nums3;
    }
};


//Method 2

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> res;
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0,j=0;
        
        while(i<n1 && j<n2)
         {
            if(nums1[i]==nums2[j])
              {
                res.push_back(nums1[i]);
                i++;
                j++;
              } 
            else if(nums1[i]>nums2[j])
              {
                j++;
              }
            else
              {
                i++;
              }
        }
      res.erase(unique(res.begin(),res.end()),res.end());  
      return res;
    }
};
