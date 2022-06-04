int mod=1e9+7;
int countPartitions(int n, int d, vector<int> &arr) 
{
     int totsum=0;
     for(int i=0;i<n;i++)
        totsum+=arr[i];
     if(totsum-d<0 || ((totsum-d)%2)) return 0;
     int target=(totsum-d)/2;
     //code of subset sum eith target k
     vector<vector<int>> dp(n,vector<int>(target+1,0));
        if(arr[0]==0) dp[0][0]=2;
        else dp[0][0]=1;
        if(arr[0]!=0 && arr[0]<=totsum) dp[0][arr[0]]=1;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=target;j++)
            {
                int nottake=dp[i-1][j];
                int take=0;
                    if(j>=arr[i])
                        take=dp[i-1][j-arr[i]];
                dp[i][j]= (take + nottake)%mod;
            }
        }
        return dp[n-1][target];
}


