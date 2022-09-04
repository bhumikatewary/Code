class Solution {
public:
    int trailingZeroes(int n) {
        int res=0;
        for(int i=5; i<=n; i=i*5){
            res = res + n/i;
        }
        return res;
    }
};

// check a pattern of n/5 + n/25 + n/125 + n/625.....
