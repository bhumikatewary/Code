class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
       
        int n=nums.size();
        if(nums.empty()) return ans;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0; i<n;i++){
           long long int target1 = target-nums[i];
            for(int j=i+1; j<n; j++){
              long long int  target2 = target1-nums[j];
              int front = j+1;
                int back = n-1;
                while(front<back){
                    int twosum = nums[front] + nums[back];
                    if(twosum < target2) front++;
                    else if (twosum>target2) back--;
                    else{
                        vector<int>quad(4,0);
                        quad[0]=nums[i];
                        quad[1]=nums[j];
                        quad[2]=nums[front];
                        quad[3]=nums[back];
                        ans.push_back(quad);
                        
                        //processing duplicate of front
                        while(front<back && nums[front]==quad[2]) ++front;
                        
                        //processing duplicate of back
                        while(front<back && nums[back]==quad[3]) --back;
                    }
                }
                
                //processing duplicate of j
                
                while(j+1<n && nums[j+1]==nums[j]) ++j;
            }
                //processing duplicate of i
                
                while(i+1<n && nums[i+1]==nums[i]) ++i;
            
        }
        return ans;
    }
};
