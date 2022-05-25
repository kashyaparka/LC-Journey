class Solution {
public:
//    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       // int n;
//         int col=matrix[0].size();
//         int row=matrix.size();
        
//         int l=0; 
//         int h=col*row-1;
//         while(l!=h)
//         {
//             int mid=(l+h)/2;
//             if(matrix[mid/col][mid%col]<target)
//                 l=mid+1;
//             else 
//                 h=mid;
//         }
//         return matrix[h/col][h%col]==target;
        
        
    //  if(matrix.size()==1) {
    //      if(target==matrix[0][0])
    //         return true;
    //      else return false;
    //  }
    //  for(int i=0;i<=row;i++){
    //       if(matrix[i][0]>target){
    //           n=i;
    //           break;
    //       }
    //   }
    //     n=n-1;
    // for(int i=0;i<col;i++){
    //       if(matrix[n][i]==target)
    //           return true;
    //   }
    // return false;
   // }
    
  bool searchMatrix(vector<vector<int>>& matrix, int target)
{
    if (matrix.size() == 0 || matrix[0].size() == 0)
    {
        return false;
    }

    int low;
    int high;

    // first search in first column, use binary search
    for (low = 0, high = matrix.size() - 1; low <= high;)
    {
        int middle = (low + high) / 2;
        if (matrix[middle][0] < target)
        {
            low = middle + 1;
        }
        else if (matrix[middle][0] > target)
        {
            high = middle - 1;
        }
        else
        {
            return true;
        }
    }

    // when above loop ends, search in row[high]
    int row = high;
    if (row >= 0)
    {
        for (low = 0, high = matrix[row].size() - 1; low <= high;)
        {
            int middle = (low + high) / 2;
            if (matrix[row][middle] < target)
            {
                low = middle + 1;
            }
            else if (matrix[row][middle] > target)
            {
                high = middle - 1;
            }
            else
            {
                return true;
            }
        }
    }

    return false;
}
};