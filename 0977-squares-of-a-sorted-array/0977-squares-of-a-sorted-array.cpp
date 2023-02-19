class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {     
        vector<int> result (nums.size());
        int start {};
        int end {int(nums.size()) - 1};
        for (int i {static_cast<int>(nums.size()) - 1}; i >= 0; i--) {
            if (abs(nums.at(start)) > abs(nums.at(end))) {
                result.at(i) = nums.at(start) * nums.at(start);
                start++;
            }
            else {
                result.at(i) = nums.at(end) * nums.at(end);
                end--;
            }
        }
        return result;
    }
};