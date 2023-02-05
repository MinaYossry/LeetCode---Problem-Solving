class Solution {
public:
    bool validPalindrome(string s) {
        int start = 0, end = s.size() - 1;
        bool flag = true;
        while (start < end && flag) {
            if (s.at(start) == s.at(end)) {
                start++;
                end--;
            }
            else {
                flag = false;
            }
        }

        return flag || isPalidrome(s, start + 1, end) || isPalidrome(s, start, end - 1);
    }

    bool isPalidrome(const string &s, int start, int end) {
        while(start < end) {
            if (s.at(start) != s.at(end)) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};