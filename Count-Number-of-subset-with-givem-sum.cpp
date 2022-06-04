//  Number Of Subsets
// Difficulty: MEDIUM
// Contributed By
// KAPEESH UPADHYAY
// |Level 1
// Problem Statement
// You are given an array (0-based indexing) of positive integers and you have to tell how many different ways of selecting the elements from the array are there such that the sum of chosen elements is equal to the target number “tar”.
int findWays(vector<int> &arr, int target)
{
     int totsum=0;
     int n=arr.size();
     //code of subset sum eith target k
     vector<vector<int>> dp(n,vector<int>(target+1,0));
        for(int i=0;i<n;i++)
        {
            dp[i][0]=1;
        }
        if(arr[0]<=target)dp[0][arr[0]]=1;
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<=target;j++)
            {
                int nottake=dp[i-1][j];
                int take=0;
                    if(j>=arr[i])
                        take=dp[i-1][j-arr[i]];
                dp[i][j]= take + nottake;
             }
        }
        return dp[n-1][target];
}