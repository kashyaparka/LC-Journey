class Solution {
public:
    int help(vector<vector<int>> &matrix,vector<vector<int>>& dp,int i,int j)
    {
        if(j<0 || j>=matrix[0].size()) return 1e9;
        if(i==0) return matrix[0][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int left=matrix[i][j] + help(matrix,dp,i-1,j);
        int down=matrix[i][j] + help(matrix,dp,i-1,j-1);
        int right=matrix[i][j] + help(matrix,dp,i-1,j+1);
        return dp[i][j]=min(left,min(down,right));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) 
    { 
        int n=matrix.size();
        int m=matrix[0].size();
        int maxi=1e9;
        vector<vector<int>> dp(n,vector<int>(m,-1));
        for(int j=0;j<m;j++)
            maxi=min(maxi,help(matrix,dp,n-1,j));
        return maxi;
    }
};