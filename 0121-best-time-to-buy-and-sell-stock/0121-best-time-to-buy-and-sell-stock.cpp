class Solution {
public:
    
    int maxProfit(vector<int>& prices) {        
        int minPrice = prices.at(0);
        int maxProfit = 0;
        
        for (int i = 0; i < prices.size(); i++)
        {
            minPrice = min(minPrice, prices.at(i));
            maxProfit = max(maxProfit, prices.at(i) - minPrice);

        }
        
        return maxProfit;
    }
};