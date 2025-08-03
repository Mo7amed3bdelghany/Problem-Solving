class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=prices[0],profit=0;
        for(int i=1;i<size(prices);i++){
            if(prices[i] < mn) mn=prices[i];
            else{
                profit = max(profit,prices[i] - mn);
            }
        }

        return profit;
    }
};