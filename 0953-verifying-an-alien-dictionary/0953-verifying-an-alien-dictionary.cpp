class Solution {
public:

    unordered_map<char, char> alphaMapping;


    bool isSorted(const string &left, const string &right) {
        if (left == right)
            return true;
            
        for (size_t i = 0; i < left.size(); i++)
        {
            if (i >= right.size())
                return false;

            if (alphaMapping.at(left.at(i)) < alphaMapping.at(right.at(i)))
                return true;

            if (alphaMapping.at(left.at(i)) > alphaMapping.at(right.at(i)))
                return false;
        }

        return true;
    }

    bool isAlienSorted(vector<string>& words, const string &order) {
        for (size_t i = 0; i < order.size(); i++)
            alphaMapping[order.at(i)] = 'a' + i;

        for (size_t i = 0; i < words.size() - 1; i++)
            if (!isSorted(words.at(i), words.at(i + 1)) )
                return false;
        
        return true;
        
    }

    // string& formatWord(string &word) {
    //     for (size_t i = 0; i < word.size(); i++)
    //         word.at(i) = alphaMapping.at(word.at(i));

    //     return word;
    // }

    // bool isAlienSorted(vector<string>& words, string order) {
    //     for (size_t i = 0; i < order.size(); i++)
    //         alphaMapping[order.at(i)] = 'a' + i;

    //     for (size_t i = 0; i < words.size() - 1; i++)
    //         if ((formatWord(words.at(i) ) > formatWord(words.at(i + 1))))
    //             return false;
        
    //     return true;
        
    // }
};