int minSubsetSumDifference(vector<int>& arr, int n)
{
     int totsum=0;
     for(int i=0;i<n;i++)
        totsum+=arr[i];
     int target=totsum;
     //code of subset sum eith target k
	 vector<vector<bool>> dp(n,vector<bool>(target+1,0));
        for(int i=0;i<n;i++)
        {
            dp[i][0]=true;
        }
        if(arr[0]<=totsum)dp[0][arr[0]]=true;
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<=target;j++)
            {
                bool nottake=dp[i-1][j];
                bool take=false;
                    if(j>=arr[i])
                        take=dp[i-1][j-arr[i]];
                dp[i][j]= take | nottake;
            }
        }
        int mini=1e9;
        for(int s1=0;s1<=totsum/2;s1++)
        {
            if(dp[n-1][s1]==true)
                mini=min(mini,abs((totsum-s1)-s1));
        }
       
        return mini;
}
