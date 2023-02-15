class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> output(pref.size());
        
        output.at(0) = pref.at(0);
        
        for(int i = 1; i < output.size(); i++)
            output.at(i) = pref.at(i - 1) ^ pref.at(i); 
        
        
        return output;
    }
};