class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start {}, end = s.size() - 1;
        while (start < end) {
            if (!isalpha(s.at(start)))
                start++;
            else if (!isalpha(s.at(end)))
                end--;
            else  {
                swap(s.at(start), s.at(end));
                start++;
                end--;
            }
        }
        return s;
    }
};