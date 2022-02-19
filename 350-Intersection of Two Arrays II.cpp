class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        int l1=nums1.size();
        int l2=nums2.size();
        
        while(i<l1 && j<l2){
            if(nums1[i]==nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
                j++;
            }else if (nums1[i]>nums2[j]){
                j++;
            }else{
                i++;
            }
        }
        return nums3;
    }
};
