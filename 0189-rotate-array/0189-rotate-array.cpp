class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        if (k == 0)
            return;
    
        vector<int> result;
        int length {int(nums.size())};
        for (int i {length - k}; i < length; i++) {
            result.push_back(nums.at(i));
        }
        for (int i {}; i < length - k; i++) {
            result.push_back(nums.at(i));
        }
        nums = result;
        return;
    }
};