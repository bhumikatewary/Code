class Solution {
public:
    int hammingWeight(uint32_t n) {
        //Brian Kernighan Algorithm
        int ans=0;
     while(n!=0)    //Keep repeating the above steps until we end up with 0
     {
         n=n&(n-1);  //eg = 101 = 5 , (101 & 100 = 1) Thus unset the rightmost bit
         ans++;
     }
     return ans; 
            }
    
};
