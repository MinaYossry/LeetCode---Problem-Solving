class Solution {
public:
    
    int thirdMax(vector<int>& nums) {
        set<int> numbers;

        for (auto num: nums)
        {
            numbers.insert(num);
            if (numbers.size() > 3)
            {
                numbers.erase(numbers.begin());
            }
        }

        return numbers.size() == 3 ? *numbers.begin() : *numbers.rbegin();
    }
};