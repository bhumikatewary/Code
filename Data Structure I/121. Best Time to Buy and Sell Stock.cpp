class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n=prices.size();
        int cp=prices[0],profit=0;
       for(int i=1;i<n;i++){
           if(cp>prices[i]){
               cp=prices[i];
           }
        else{
            profit=max(profit, prices[i]-cp);
        }
    }
        return profit; 
    }
};
