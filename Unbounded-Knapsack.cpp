int unboundedKnapsack(int n, int w, vector<int> &val, vector<int> &wt)
{
    vector<vector<int>> dp(n+1,vector<int> (w+1,0));
    //base case
    for(int W=0;W<=w;W++)
    {
        int howmany = W/wt[0];
        dp[0][W]=howmany*val[0];
    }
    for(int ind=1;ind<n;ind++)
    {
        for(int W=0;W<=w;W++)
        {
            int nottake=dp[ind-1][W];
            int take=0;
            if(wt[ind]<=W)
            {
                take=val[ind]+dp[ind][W-wt[ind]];
            }
            dp[ind][W]=max(take,nottake);
        }
    }
    return dp[n-1][w];
}
