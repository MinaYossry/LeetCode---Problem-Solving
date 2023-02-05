class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool alternate {true};
        int last = n & 1;
        n = n >> 1;

        while (alternate && n != 0) {
            int current = n & 1;
            alternate = (last != current);
            last = current;
            n = n >> 1;
        }

        return alternate;
    }
};