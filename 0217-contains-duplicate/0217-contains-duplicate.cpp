class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.size() <= 1)
            return false;
        
        unordered_set<int> numbers;
        for (auto num : nums) {
            if (numbers.find(num) != numbers.end())
                return true;
            numbers.insert(num);
        }
        return false;
    }
};