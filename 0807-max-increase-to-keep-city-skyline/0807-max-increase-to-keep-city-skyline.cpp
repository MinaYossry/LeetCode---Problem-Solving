class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> maxRows (grid.size());
        vector<int> maxCols (grid.size());
        
        for(int i = 0; i < grid.size(); i++)
        {
            int max = *(max_element(grid.at(i).begin(), grid.at(i).end()));
            maxRows.at(i) = max;
        }
        
        for(int col = 0; col < grid.size(); col++)
        {
            int max = grid.at(0).at(col);
            for (int row = 0; row < grid.size(); row++)
            {
                if (grid.at(row).at(col) > max)
                    max = grid.at(row).at(col);
            }
            maxCols.at(col) = max;
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