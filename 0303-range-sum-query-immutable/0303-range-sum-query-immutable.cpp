class NumArray {
private:
    vector<int> arr;
    int start, end, lastSum;
public:
    NumArray(vector<int>& nums)
    {
        arr = nums;
        start = 0;
        end = nums.size() - 1;
        lastSum = 0;
        for(auto num: nums)
            lastSum += num;
    }
    
    int sumRange(int left, int right) 
    {        
        while(left > start)
            lastSum -= arr.at(start++);
        
        while (left < start)
            lastSum += arr.at(--start);
        
        while(right < end)
            lastSum -= arr.at(end--);
        
        while (right > end)
            lastSum += arr.at(++end);
        
        return lastSum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */