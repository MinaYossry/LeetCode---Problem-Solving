public class Solution {
   public IList<int> GetRow(int rowIndex)
        {

            int[] mainArray = new int[rowIndex + 1];

            mainArray[0] = mainArray[^1] = 1;
       
            for (int i=1; i <= rowIndex; i++)
            {
                for (int j=i; j > 0; j--)
                    mainArray[j] =  mainArray[j] + mainArray[j - 1]; 
                
            }
            
       mainArray[^1] = 1;
            return mainArray;
        }
}