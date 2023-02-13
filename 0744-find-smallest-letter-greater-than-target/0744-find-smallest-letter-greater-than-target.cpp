class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if (target < letters.at(0) || target >= letters.at(letters.size() - 1))
            return letters.at(0);
        
        
        int start = 0;
        int end = letters.size() - 1;
        
        int result = letters.at(0);
        
        while(start <= end)
        {
            int mid = (start + end) / 2;
            
            if (target < letters.at(mid))
            {
                result = letters.at(mid);
                end = mid - 1;
            }
            else
                start = mid + 1;
        }
        
        return result;
    }
};