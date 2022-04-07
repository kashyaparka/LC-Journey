class Solution {
public:
    int help(vector<vector<int>> &dp,int i,int j,vector<vector<int>> &og)
    {
        if(i>=0 && j>=0 && og[i][j]==1)
            return 0;
        if(i==0 && j==0)
            return 1;
        if(i<0 || j<0) 
            return 0;
        if(dp[i][j]!=-1) 
            return dp[i][j];
        
        int left=help(dp,i,j-1,og);
        int right=help(dp,i-1,j,og);
        
        return dp[i][j]=left+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& og) 
    {
       int n=og.size();
       int m=og[0].size();
       vector<vector<int>> dp(n,vector<int> (m,-1));
       return help(dp,n-1,m-1,og);
    }
};