class Solution {
public:
    //topdown
	 // int mincost(vector<int>& cost, int n,vector<int> &dp)
	 // {
	 // if (n < 0) return 0;
	 // if (n==0 || n==1) return cost[n];
	 // if(dp[n]!=0) return dp[n];
	 // dp[n]=cost[n] + min(mincost(cost, n-1,dp), mincost(cost, n-2,dp));   
	 // return dp[n];
	 // }
    int minCostClimbingStairs(vector<int>& cost) 
    {
       //topdown
        int n=cost.size();
       // vector<int> dp(n+1,0);
       // return min(mincost(cost,n-1,dp),mincost(cost,n-2,dp));
        
       //bottomup
       vector<int> dp(n+1,0);
       for(int i=0;i<n;i++)
       {
           if(i<2) dp[i]=cost[i];
           else
               dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
       }
       return min(dp[n-1],dp[n-2]);
    }
};