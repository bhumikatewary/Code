//Sieve of Eratosthenes


class Solution {
public:
    int countPrimes(int n) {
        vector<int> v(n+1,true);
        if(n==0 || n==1){
            return false;
        }
        v[1]=false;
        v[0]=false;
        
        int count=0;
        for(int i=2; i*i<n;i++){
            if(v[i]){
            for(int j=2*i;j<=n;j=j+i){
                v[j]=false;
            }
            }
        }
        for(int i=0; i<n;i++){
            if(v[i]==true) count++;
        }
        return count;
    }
};
