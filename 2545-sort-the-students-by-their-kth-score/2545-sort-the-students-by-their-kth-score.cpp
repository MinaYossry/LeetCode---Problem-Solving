class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        for(int i = 0; i < score.size(); i++)
        {
            int max = i;
            for (int j = i; j < score.size(); j++)
            {
                if (score.at(j).at(k) > score.at(max).at(k))
                    max = j;
            }
            swap(score.at(i), score.at(max));
        }
        return score;
    }
};