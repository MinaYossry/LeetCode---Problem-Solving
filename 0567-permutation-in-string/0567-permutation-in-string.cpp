class Solution {
public:
    bool isPermu(const vector<int> &left, const vector<int> &right)
    {
        for (int i = 0; i < left.size(); i++)
            if (left.at(i) != right.at(i))
                return false;
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size())
            return false;

        
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);

        for (int i = 0; i < s1.size(); i++)
        {
            freq1.at(s1.at(i) - 'a') += 1;
            freq2.at(s2.at(i) - 'a') += 1;
        }

        for (int i = 0; i < s2.size() - s1.size(); i++)
        {
            if(isPermu(freq1, freq2))
                return true;
            
            freq2.at(s2.at(i + s1.size()) - 'a') += 1;
            freq2.at(s2.at(i) - 'a') -= 1;
        }


        return (isPermu(freq1, freq2));
    }
};