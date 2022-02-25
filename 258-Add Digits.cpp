class Solution {
public:
    int addDigits(int num) {
        int n=0;
        int result=0;
        while(num>9){
            n=num%10;
            num=num/10+n;
            }
        
        return num;
    }
};



