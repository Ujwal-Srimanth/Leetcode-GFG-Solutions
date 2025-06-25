class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int profit = 0;
       int maxProfit = 0;
       int cost = prices[0];
       for(int i=1;i<prices.size();i++){
          profit = max(prices[i] - cost,profit);
          if(prices[i] - cost < 0){
            cost = prices[i];
          }
       }
       return profit;
    }
};