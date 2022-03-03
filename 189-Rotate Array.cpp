class Solution {
public:
    void rotateArr(vector<int> &nums, int start, int end){
        
        while(start<end){
            int temp=nums[start];
           nums[start++]=nums[end];
            nums[end--]=temp;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        
        rotateArr(nums,0,n-1);
        rotateArr(nums,0,k-1);
        rotateArr(nums,k,n-1);
    }
};
