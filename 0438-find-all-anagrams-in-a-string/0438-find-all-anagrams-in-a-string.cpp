class Solution {
public:
    bool matching(vector<int> &left, vector<int> &right)
    {
        for (int i = 0; i < left.size(); i++)
            if (left.at(i) != right.at(i))
                return false;
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        if (p.size() > s.size())
            return vector<int>();
        vector<int> mappingS(26, 0);
        vector<int> mappingP(26, 0);

        vector<int> result;

        for (int i = 0; i < p.size(); i++)
        {
            mappingP.at(p[i] - 'a')++;
            mappingS.at(s[i] - 'a')++;
        }

        for (int i = 0; i < s.size() - p.size(); i++)
        {
            if (matching(mappingS, mappingP))
                result.push_back(i);
            
            mappingS.at(s[i+ p.size()]  - 'a')++;
            mappingS.at(s[i] - 'a')--;
        }

        if (matching(mappingS, mappingP))
                result.push_back(s.size() - p.size());

        return result;
    }
};