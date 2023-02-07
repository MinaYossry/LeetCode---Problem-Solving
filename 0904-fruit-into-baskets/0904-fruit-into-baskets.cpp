class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        if (fruits.size() <= 2)
            return fruits.size();


    // Sliding window
        unordered_map<int, int> treesCount;
        int start = 0, end = 0, maxCount = 0;
        while (end < fruits.size())
        {
            treesCount[fruits[end]] += 1;
            end++;
            
            while (treesCount.size() > 2)
            {
                treesCount[fruits[start]] -= 1;
                if (treesCount[fruits[start]] == 0)
                    treesCount.erase(fruits[start]);
                start++;
            }
            
            maxCount = max(maxCount, end - start);
        }
        return maxCount;
//     unordered_map<int, int> treesCount;

//     int basket1 = fruits.at(0);
//     int basket2 = -1;
//     int maxCount = 0;

//     int start = 0;
//     int nextStart;
//     while (start < fruits.size())
//     {
//         int fruit = fruits.at(start);

//         if (basket2 == -1 && fruit != basket1)
//         {
//             basket2 = fruit;
//             nextStart = start;
//         }

//         if (fruit != basket1 && fruit != basket2)
//         {
//             maxCount = max(maxCount, treesCount[basket1] + treesCount[basket2]);

//             treesCount[basket1] = 0;
//             basket1 = basket2;
//             basket2 = -1;
//             treesCount[fruit] = 0;
//             treesCount[basket1] = 1;
//             start = nextStart + 1;
//         }
//         else {
//             treesCount[fruit] += 1;
//             start++;
//         }
//         maxCount = max(maxCount, treesCount[basket1] + treesCount[basket2]);
//     }
        
//         return maxCount;


        
    }
};