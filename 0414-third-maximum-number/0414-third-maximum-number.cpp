class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max = INT_MIN;
        int secondMax = INT_MIN;
        int thirdMax = INT_MIN;
        int min = INT_MAX;

        for (auto num: nums)
        {
            if (num < min)
                min = num;

            if (num > max)
            {
                thirdMax = secondMax;
                secondMax = max;
                max = num;
            } else if (num > secondMax && num != max)
            {
                thirdMax = secondMax;
                secondMax = num;
            } else if (num > thirdMax && num != secondMax && num != max)
            {
                thirdMax = num;
            }
        }

        if (secondMax == thirdMax)
            return max;
        
        return (thirdMax == INT_MIN && min != INT_MIN) ? max : thirdMax;
    }
};