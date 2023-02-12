class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n + 1);

        for (int i {}; i < result.size(); i++) {
            result.at(i) = bitsCounter(i);
        }

        return result;
    }

    // int bitsCounter(int number) {
    //     int counter {};
    //     while (number != 0) {
    //         counter += number & 1;
    //         number = number >> 1;
    //     }
    //     return counter;
    // }
    
    int bitsCounter(int number) {
        int counter {};
        
        while (number != 0) {
            double power = log2(number);
            double remainder = power - static_cast<int>(power);
            counter += 1;
        
            
            number -= pow(2, static_cast<int>(power));
        }
        
        return counter;
    }
};