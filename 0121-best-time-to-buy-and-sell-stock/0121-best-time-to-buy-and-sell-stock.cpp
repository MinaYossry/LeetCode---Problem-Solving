class Solution {
public:
    
    int maxProfit(vector<int>& prices) {        
        int minPrice = prices.at(0);
        int maxProfit = 0;
        
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices.at(i) < minPrice)
                minPrice = prices.at(i);
            
            int todayProfit = prices.at(i) - minPrice;
            if (todayProfit > maxProfit)
                maxProfit = todayProfit;
        }
        
        return maxProfit;
    }
};