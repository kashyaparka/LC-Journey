class Solution {
public:
    // int solve(vector<int>& coins,int amount,vector<int>& dp)
    // {
    //     if(amount==0) return 0;
    //     if(dp[amount]!=0)
    //         return dp[amount];
    //     int ans=INT_MAX;
    //     for(int i=0;i<coins.size();i++)
    //     {
    //         if(amount-coins[i]>=0)
    //         {
    //             int subproblem=solve(coins,amount-coins[i],dp);
    //             ans=min(ans,subproblem+1);
    //         }
    //     }
    //     dp[amount]=ans;
    //     return dp[amount];
    // }
    int solveBottomUp(vector<int>& coins,int n)
    {
        // if(amount==0) return 0;
        // vector<int> dp(amount+1);
        // dp[0]=0;
        // for(int i=1;i<=amount;i++)
        // {
        //     dp[i]=INT_MAX;
        //     for(int j=0;j<coins.size();j++)
        //     {
        //         if(i-coins[j]>=0)
        //         {
        //             int subprob=dp[i-coins[j]];
        //             dp[i]=min(dp[i],subprob+1);
        //         }
        //     }
        // }
        // return dp[--amount] == INT_MAX ? -1 : dp[amount];
        int dp[++n];
        dp[0] = 0;
        // more convenient to have the coins sorted
        sort(begin(coins), end(coins));
        // populating our dp array
        for (int i = 1; i < n; i++) {
            // setting dp[0] base value to 1, 0 for all the rest
            dp[i] = INT_MAX;
            for (int c: coins) {
                if (i - c < 0) break;
                // if it was a previously not reached cell, we do not add use it
                if (dp[i - c] != INT_MAX) dp[i] = min(dp[i], 1 + dp[i - c]);
            }
        }
        return dp[--n] == INT_MAX ? -1 : dp[n];
    }
    int coinChange(vector<int>& coins, int amount) 
    {
         //solve(coins,amount,dp);
         return solveBottomUp(coins,amount);
         //return dp[amount];
    }
};