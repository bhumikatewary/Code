class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        int sum=0;
        for(int i=0; i<nums.size();i++){
            int s=i+1;
            int e=nums.size()-1;
            while(s<e){
                int total=nums[i]+nums[s]+nums[e];
                if(abs(total-target)<=diff){
                    diff=abs(total-target);
                    sum=total;
                }

                if(total<target) s++;
                else e--;
            }

        }
        return sum;
    }
};
