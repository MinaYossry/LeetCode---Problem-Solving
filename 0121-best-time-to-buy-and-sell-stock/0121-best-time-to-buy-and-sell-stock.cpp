class Solution {
public:
    
    int maxProfit(vector<int>& prices) {        
        int minPrice = prices.at(0);
        int maxProfit = 0;
        int size = prices.size();
        
        for (auto &price: prices)
        {
            minPrice = price < minPrice ? price : minPrice;
            maxProfit = price - minPrice > maxProfit ? price - minPrice : maxProfit;

        }
        
        return maxProfit;
    }
};