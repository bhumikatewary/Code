class Solution {
public:
    int singleNumber(vector<int>& A) {
        
     int a[32] = {0};
for(int i = 0; i < A.size(); i++){
for(int j = 0; j < 32; j++){
if((A[i] & (1 << j))){
a[j]++;
}
}
}
long long ans = 0;
for(int j = 0; j < 32; j++){
if(a[j]%3 != 0){
ans |= (1 << j);
}
}
return ans;
    }
};
