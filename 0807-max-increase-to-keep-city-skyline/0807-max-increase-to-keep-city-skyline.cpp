class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> maxRows (grid.size());
        vector<int> maxCols (grid.size());
        
        for(int row = 0; row < grid.size(); row++)
        {
            for (int col = 0; col < grid.size(); col++)
            {
                maxRows.at(row) = max(maxRows.at(row), grid.at(row).at(col));
                maxCols.at(col) = max(maxCols.at(col), grid.at(row).at(col));
            }
        }
        
        int result = 0;
        
        for(int row = 0; row < grid.size(); row++)
        {
            for (int col = 0; col < grid.size(); col++)
            {
                result += min(maxRows.at(row), maxCols.at(col)) - grid.at(row).at(col);
            }
        }
        
        return result;
    }
};