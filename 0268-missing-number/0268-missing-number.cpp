class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int min = 0, max = nums.at(0), sum = 0, totalSum = 0;
        
        bool hasZero = false;
        
        for (auto num: nums)
        {
            if (num > max)
                max = num;
            
            if (num == 0)
                hasZero = true;
            
            sum += num;
        }
        
        for (int i = min; i <= max; i++)
            totalSum += i;
        
        
        if (hasZero)
            return (sum == totalSum) ? max + 1 : totalSum - sum;
        else 
            return 0;
    }
};