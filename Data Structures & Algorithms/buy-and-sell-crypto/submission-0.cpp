class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int profit = 0;
        int sell_day = 1;
            for(int i=0;i<len-1;i++)
            {
                while(sell_day < len)
                {
                    int temp_profit = prices[sell_day] - prices[i];
                    if(temp_profit < profit){
                        sell_day++;
                    }
                    else{
                        profit = temp_profit;
                        sell_day++;
                    }
                }
                sell_day = i+2;
        }
    return profit;    
    }
};
