#include <iostream>
#include <numeric>
#include <string_view>
#include <vector>

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> flags(nums.size(), true);
        vector<int> output;

        for(int i = 0; i < nums.size(); i++)
        {
            flags.at(nums.at(i) - 1) = false;
        }
            

        for(int i = 0; i < flags.size(); i++)
            if (flags.at(i))
                output.push_back(i + 1);

        return output;
    }
};