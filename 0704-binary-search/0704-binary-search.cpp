class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0)
            return -1;
        
        int start {};
        int end {static_cast<int> (nums.size()) - 1};
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums.at(mid) == target)
                return mid;
            else if (nums.at(mid) < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        
        return -1;
    }
};