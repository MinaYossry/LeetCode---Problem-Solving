class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int count {};
        for (int row {}; row < grid2.size(); row++) {
            for (int col {}; col < grid2.at(row).size(); col++) {
                if (grid2.at(row).at(col) == 1 && grid2.at(row).at(col) == grid1.at(row).at(col)) {
                    bool sub = visited(grid1, grid2, row, col);
                    cout << row << " " << col << " " << sub << endl;
                    count += sub;
                }
            }
        }
        return count;
    }
    
    bool visited(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int row, int col) {
        if (row < 0 || row >= grid1.size() || col < 0 || col >= grid1.at(row).size())
            return true;
        
        else if (grid2.at(row).at(col) == 0 || grid2.at(row).at(col) == 2)
            return true;
        
        else if (grid2.at(row).at(col) == 1 && grid1.at(row).at(col) == 0)
            return false;
        
        else if (grid2.at(row).at(col) == 1 && grid1.at(row).at(col) == 1) {
            grid2.at(row).at(col) = 2;
            return visited(grid1, grid2, row - 1, col)
                & visited(grid1, grid2, row + 1, col)
                & visited(grid1, grid2, row, col - 1)
                & visited(grid1, grid2, row, col + 1);
        }
        
        else 
            return false;
    }
};