class Solution {
public:

    vector<int> getRow(int rowIndex) {

        vector<int> result (rowIndex+1, 1);
        if (rowIndex <= 1) return result;

        result.at(1) = rowIndex;
        result.at(result.size() - 2) = rowIndex;

        int start = 2;
        int end = result.size() - 3;

        while (start <= end)
        {
            unsigned long long value = (static_cast<unsigned long long>(result.at(start - 1)) * (rowIndex - start + 1)) / start;
            result.at(start) = value;
            result.at(end) = value;
            start++;
            end--;
        }

        return result;
    }

    // ================================================================= //

    // int getElement(int row, int column)
    // {
    //     static vector<vector<int>> calc(35, vector<int>(35, 0));

    //     if (calc.at(row).at(column) != 0)
    //         return calc.at(row).at(column);
        
    //     if ((row <= 2) || column == 0 || column == row - 1)
    //         return 1;

    //     int value = getElement(row - 1, column - 1) + getElement(row - 1, column);
    //     calc.at(row).at(column) = value;
    //     return calc.at(row).at(column);
    // }

    // vector<int> getRow(int rowIndex) {

    //     vector<int> result (rowIndex+1, 1);
        
    //     unsigned long long total = pow(2, rowIndex);

    //     for (int i = 0; i < result.size(); i++)
    //     {
    //         result.at(i) = getElement(rowIndex+1, i);
    //     }

    //     return result;
    // }

    // =================================================== //

    // vector<int> getRow(int rowIndex) {
    //     vector<vector<int>> result;
        
    //     result.emplace_back(vector<int>{1});
    //     if (rowIndex == 0) {
    //         return result.at(0);
            
    //     }
        
    //     result.emplace_back(vector<int>{1,1});
    //     if (rowIndex == 1) {
    //         return result.at(1);
    //     }
        
    //     for (int i {2}; i <= rowIndex; i++) {
            
    //         vector<int> temp (i + 1, 1);
            
    //         for (int j {1}; j < temp.size() - 1; j++) {
                
    //             temp.at(j) = result.at(i - 1).at(j-1) + result.at(i - 1).at(j);
    //         }
    //         result.emplace_back(temp);
    //     }
    //     return result.at(rowIndex);
    // }
};