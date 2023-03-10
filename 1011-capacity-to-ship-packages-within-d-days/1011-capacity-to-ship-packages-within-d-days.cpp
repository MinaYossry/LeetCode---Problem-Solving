class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int left = weights.at(0);
        int right = 0;
        for (auto weight: weights)
        {
            if (weight > left)
                left = weight;
            
            right += weight;
        }

        
        if (days == 1)
            return right;
        
        int minResult = INT_MAX;
        
        
        while (left  < right)
        {
            int tempSum = 0;
            int tempDays = 1;
            bool flag = false;
            
            int mid = (left + right) / 2;
            
            
            for(int i = 0; i < weights.size(); i++)
            {
                int weight = weights.at(i);
                
                if (tempSum + weight > mid)
                {
                    tempDays++;
                    tempSum = weight;
                } 
                else 
                {
                    tempSum += weight;
                }
            }
            
            
            if (tempDays <= days)
            {
                right = mid;
                minResult = min(minResult, mid);
            }
            else
                left = mid + 1;
            
        }
        
        return minResult;
    }
};