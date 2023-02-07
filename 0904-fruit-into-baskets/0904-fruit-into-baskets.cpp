class Solution {
public:
    int totalFruit(vector<int>& fruits) {
    if (fruits.size() <= 2)
        return fruits.size();


    unordered_map<int, int> treesCount;

    int basket1 = fruits.at(0);
    int basket2 = -1;
    int maxCount = 0;

    int start = 0;
    int nextStart;
    while (start < fruits.size())
    {
        int fruit = fruits.at(start);

        if (basket2 == -1 && fruit != basket1)
        {
            basket2 = fruit;
            nextStart = start;
        }

        if (fruit != basket1 && fruit != basket2)
        {
            maxCount = max(maxCount, treesCount[basket1] + treesCount[basket2]);

            treesCount[basket1] = 0;
            basket1 = basket2;
            basket2 = -1;
            treesCount[fruit] = 0;
            treesCount[basket1] = 1;
            start = nextStart + 1;
        }
        else {
            treesCount[fruit] += 1;
            start++;
        }
        maxCount = max(maxCount, treesCount[basket1] + treesCount[basket2]);
    }
        
        return maxCount;

        
//         int start = 0;
//         bool found = false;
//         int basket1 = fruits.at(start);
//         int basket2 = -1;
//         int tempCount1 = 0;
//         int tempCount2 = 0;
        
//         while(start < fruits.size() && !found)
//         {
//             basket2 = -1;
//             tempCount2 = 0;
            
//             found = true;
//             for (int i = start; i < fruits.size() && found; i++)
//             {
//                 cout << i << "   " << basket1 << "    " << basket2 << "   " << maxCount << endl;
//                 if (basket2 == -1 && fruits.at(i) != basket1)
//                 {
//                     basket2 = fruits.at(i);
//                     start = i;
//                 }
                    

//                 if (fruits.at(i) == basket1 || fruits.at(i) == basket2)
//                     tempCount1++;
                
//                 else if (fruits.at(i) == basket2)
//                     tempCount2++;
                
//                 else if (fruits.at(i) != basket1 && fruits.at(i) != basket2)
//                 {
//                     tempCount1 = tempCount2;
//                     basket1 = basket2;
//                     found = false;
//                 }
                
//                 if (maxCount < tempCount1 + tempCount2)
//                         maxCount = tempCount1 + tempCount2;
//             }
//         }



        
    }
};