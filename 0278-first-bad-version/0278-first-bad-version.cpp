// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        
        int result = n;
        
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            
            if (isBadVersion(mid))
            {
                end = mid - 1;
                if (mid < result)
                    result = mid;
            }
            else
                start = mid + 1;
                
            
           
            
        }
         return result;
    }
};