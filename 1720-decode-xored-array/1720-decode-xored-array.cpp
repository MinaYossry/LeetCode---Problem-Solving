class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> output(encoded.size() + 1);
        
        output.at(0) = first;
        
        for(int i = 1; i < output.size(); i++)
        {
            output.at(i) = output.at(i - 1) ^ encoded.at(i - 1);
        }
        
        return output;
    }
};