class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n + 1);

        for (int i {}; i < result.size(); i++) {
            result.at(i) = bitsCounter(i);
        }

        return result;
    }

    int bitsCounter(int number) {
        int counter {};
        while (number != 0) {
            counter += number & 1;
            number = number >> 1;
        }
        return counter;
    }
};