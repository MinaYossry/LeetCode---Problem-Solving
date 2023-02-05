public class Solution {
   public IList<int> GetRow(int rowIndex)
        {
            int[] arr0 = new int[1];
            int[] arr1 = new int[2];
            int[] mainArray;
            int flag = 0;


            arr0[0] = arr1[0] = arr1[^1] = 1;
            if ( rowIndex == 1)
                return arr1;
            if (rowIndex == 0)
                return arr0;

            mainArray = arr1;
            //loop for Rows
            for (int i=1; i < rowIndex; i++)
            {
                arr0 = new int[mainArray.Length + 1];
                arr0[0] = arr0[^1] = 1;
                
                //loop for filling rows
                for (int j=1;j< mainArray.Length;j++)
                    arr0[j] = mainArray[j - 1] + mainArray[j]; 
                
                mainArray = arr0;
            }

            if(rowIndex%2==0)
                return arr0;
            else 
                return mainArray;
        }
}