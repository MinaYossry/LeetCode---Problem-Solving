class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XoR {};

        for (auto num: nums)
            XoR ^= num;

        return XoR;
    }
};