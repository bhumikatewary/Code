class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
       int  n=arr.size();
        for(int i=0; i<n;i++){
            int start = n-i;
            int end= i+1;
            int total = start*end;
            
            int odd =total/2;
            
            if(total%2!=0) odd++;
            sum+=odd*arr[i];
            
        }
        
        return sum;
    
    
    }
};


//commented 

int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        int n = arr.size();
        for(int i=0; i<n; ++i){
            int start = n-i;          //calc. the subarrays start with the ith element & for every element that is: size-index
            int end  = i+1;          // calc. the subarrays end with the ith element & that is: i+1
            int total =  start*end;  // the total no of subarrays in which ith element is present are: start*end
            int odd = total/2;       // usually half of total is odd
            if(total%2 != 0)         // in case total is odd, then odd subarrays is one more than the even one
                odd++;
            sum+= odd*arr[i];        // for sum we multiply the no of times ith element present in odd subarrays with arr[i]
        }
        return sum;
