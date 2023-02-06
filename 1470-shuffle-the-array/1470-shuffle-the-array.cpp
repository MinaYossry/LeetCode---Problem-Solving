class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(nums.size());
        
        bool first = true;
        
        for(int target = 0, source = 0; target < result.size(); target++)
        {
            result.at(target) = nums.at(source);
            
            first = !first;
            
            source = first ? source + 1 - n : source + n ;
        }
        
        return result;
    }
};