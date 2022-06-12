class Solution {
public:
int solve(string &s,string &t,int i,int j,vector<vector<int>> &dp)
{
    if(j<0) return 1;
    if(i<0) return 0;   
    if(dp[i][j]!=-1) return dp[i][j];
    
    if(s[i]==t[j])
    {
        return dp[i][j]=solve(s,t,i-1,j-1,dp)+solve(s,t,i-1,j,dp);
    }
        
    return  dp[i][j]=solve(s,t,i-1,j,dp);
}

    int numDistinct(string s, string t) {
        long long n=s.size();
        long long m=t.size();
        vector<vector<double>> dp(n+1,vector<double> (m+1,-1));
        // return solve(s,t,n-1,m-1,dp);
        for(int i=0;i<=m;i++) dp[0][i]=0;
        for(int i=0;i<=n;i++) dp[i][0]=1;
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(s[i-1]==t[j-1])
                    dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][m];
    }
};