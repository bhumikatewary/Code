class Solution {
public:
    int getSum(int a, int b) {
        int sum=0;
            unsigned int carry;
        while(b){
            sum = a^b;
            carry = a&b;
            a=sum;
            b = carry<<1;
        }
        return a;
    }
};
