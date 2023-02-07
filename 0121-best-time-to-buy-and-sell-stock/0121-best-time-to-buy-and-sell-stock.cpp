class Solution {
public:
    
    int maxProfit(vector<int>& prices) {        
        int minPrice = prices.at(0);
        int maxProfit = 0;
        int size = prices.size();
        
        for (int i = 1; i < size; i++)
        {
            minPrice = min(minPrice, prices.at(i));
            maxProfit = max(maxProfit, prices.at(i) - minPrice);

        }
        
        return maxProfit;
    }
};