class Solution {
public:
    int help(vector<vector<int>> &dp,int i,int j)
    {
        if(i==0 && j==0)
            return 1;
        if(i<0 || j<0) 
            return 0;
        if(dp[i][j]!=-1) 
            return dp[i][j];
        
        int left=help(dp,i,j-1);
        int right=help(dp,i-1,j);
        
        return dp[i][j]=left+right;
    }
    int uniquePaths(int m, int n) 
    {
          vector<vector<int>> dp(m,vector<int>(n,-1));
          return help(dp,m-1,n-1);
    }
};