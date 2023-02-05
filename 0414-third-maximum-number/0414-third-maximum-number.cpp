class Solution {
public:
    int getNthMax(const vector<int> &nums, int target)
    {
        set<int> numbers;

        for (auto num: nums)
        {
            numbers.insert(num);
            if (numbers.size() > target)
            {
                numbers.erase(numbers.begin());
            }
        }

        return numbers.size() == target ? *numbers.begin() : *numbers.rbegin();
    }
    
    int thirdMax(vector<int>& nums) {
        return getNthMax(nums, 3);
    }
};