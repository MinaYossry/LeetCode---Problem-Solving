class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int row = 0; row < matrix.size()/2; row++)
        {
            for(int col = row; col < matrix.size() - 1 - row; col++)
            {
                int num1 = matrix.at(row).at(col);
                int num2 = matrix.at(col).at(matrix.size() - 1 - row);
                int num3 = matrix.at(matrix.size() - 1 - row).at(matrix.size() - 1 - col);
                int num4 = matrix.at(matrix.size() - 1 - col).at(row);
                
                
                matrix.at(row).at(col) = num4;
                matrix.at(col).at(matrix.size() - 1 - row) = num1;
                matrix.at(matrix.size() - 1 - row).at(matrix.size() - 1 - col) = num2;
                matrix.at(matrix.size() - 1 - col).at(row) = num3;
            }
        }
        
    }
};