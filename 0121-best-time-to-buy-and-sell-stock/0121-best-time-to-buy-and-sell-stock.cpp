class Solution {
public:
    
    int maxProfit(vector<int>& prices) {        
        int minPrice = prices.at(0);
        int maxProfit = 0;
        int size = prices.size();
        
        for (auto &price: prices)
        {
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit,price - minPrice);

        }
        
        return maxProfit;
    }
};