class Solution {
public:
    int help(int i,int j,vector<vector<int>> &dp,vector<vector<int>>& g)
    {
        if(i==0 && j==0)
            return g[0][0];
        if(i<0 || j<0)
            return 1e9;
        if(dp[i][j]!=-1) return dp[i][j];
        long long int up=g[i][j]+help(i-1,j,dp,g);
        long long int left=g[i][j]+help(i,j-1,dp,g);
        return dp[i][j]=min(up,left);
    }
    int minPathSum(vector<vector<int>>& g) 
    {
        int n=g.size();
        int m=g[0].size();
        vector<vector<int>> dp(n,vector<int> (m,-1));
        return help(n-1,m-1,dp,g);
    }
};