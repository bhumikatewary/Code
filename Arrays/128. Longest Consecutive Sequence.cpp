class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         int max_count=0,curr_count=0;
	
	// use unordered set and store all elem
	unordered_set<int> s;
	for(int i=0; i<nums.size();i++){
		s.insert(nums[i]);
	}
	
	// Traverse through the set
	for(int i=0; i<nums.size();i++){
		if(!s.count(nums[i]-1)){ 
			curr_count = 1;
			while(s.count(nums[i]+1)){ // check consecutive for each number
				curr_count++;
				nums[i]+=1;
			}
			max_count = max(max_count,curr_count); 
		}
	}
	return max_count;
    }
};
