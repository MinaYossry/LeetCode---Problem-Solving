class Solution {
public:
    int climbStairs(int n)
    {
        static unordered_map<int, int> calc;
        
        if (calc.find(n) != calc.end())
            return calc.at(n);
        
        if (n < 1)
            return 0;
        
        if (n <= 2)
            return n;
        
        int value = climbStairs(n - 1) + climbStairs(n - 2);
        calc[n] = value;
        return value;
        
    }
};