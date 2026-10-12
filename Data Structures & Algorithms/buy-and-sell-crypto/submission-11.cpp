class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int lowest_buyin = prices[0];
        int len = prices.size();
        for(int i=0;i<len;i++)
        {
            if(prices[i] <= lowest_buyin){
                lowest_buyin = prices[i];
                continue;
            }
            int latest_profit = prices[i] - lowest_buyin;
            if(latest_profit >= max_profit){
                max_profit = latest_profit;
            }
        }
        return max_profit;
    }
};
