class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> output(boxes.size());
        vector<int> ones;
        
        for(int i = 0; i < boxes.size(); i++)
            if (boxes.at(i) == '1')
                ones.push_back(i);
        
        for(int i = 0; i < output.size(); i++)
        {
            for (int j = 0; j < ones.size(); j++)
            {
                if (i == ones.at(j))
                    continue;
                
                output.at(i) += abs(i - ones.at(j));
            }
        }
        
        return output;
        
    }
};