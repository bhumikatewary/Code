class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums[0];
        int count=1;

        int l=nums.size();
        for(int i=1;i<l;i++){
            if(nums[i]==n){
                count++;
            }else{
                count--;
            }
            if(count==0){
                n=nums[i];
                count=1;
            }
        }
        return n;
    }
};
