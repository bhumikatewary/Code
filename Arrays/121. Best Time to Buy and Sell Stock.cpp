class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int cp=prices[0];
        for(int i=0; i<prices.size();i++){
            if(cp>prices[i]){
                cp=prices[i];
            }else{
                profit = max(profit, prices[i]-cp);
            }
        }
        return profit;
    }
};
