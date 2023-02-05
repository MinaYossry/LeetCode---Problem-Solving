class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;

        
        vector<string> arr(numRows);

        size_t row = 0;
        bool down = true;

        for (auto c: s)
        {
            arr.at(row) += c;
            if (down) {
                row++;
                if (row == numRows)
                {
                    down = false;
                    row -= 2;
                }
            } else {
                row--;
                if (row == -1) {
                    down = true;
                    row = 1;
                }
            }
        }

        string result;
        for (auto &str: arr)
            result += str;

        return result;
    }
};