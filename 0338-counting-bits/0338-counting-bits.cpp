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
        
        while (number > 1) {
            double power = log2(number);
            double remainder = power - static_cast<int>(power);
            counter += 1;
            
            if (remainder == 0)
                return counter;
            
            number -= pow(2, static_cast<int>(power));
        }
        
        if (number == 1)
            counter += 1;
        
        return counter;
    }
};