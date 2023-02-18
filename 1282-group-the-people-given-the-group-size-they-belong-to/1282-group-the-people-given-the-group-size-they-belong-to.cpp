class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> mapping;
        vector<vector<int>> result;
        
        for(int i = 0; i < groupSizes.size(); i++)
            mapping[groupSizes.at(i)].push_back(i);
        
        for(const auto &pair: mapping)
            for (int i = 0; i < pair.second.size(); i += pair.first)
                result.emplace_back(pair.second.begin() + i, pair.second.begin() + i + pair.first);
        
        return result;
    }
};