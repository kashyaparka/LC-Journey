class Solution {
public:
    int minSteps(int n) 
    {
        // if(n==1)  return 0;
        // if(n==2)  return 2;
        // int dp[n+1];
        // dp[0]=0;
        // dp[1]=2;
        // for(int i=3;i<=n;i++)
        // {
        //     dp[i]=i;
        //     int j=i/2;
        //     while(j>=1)
        //     {
        //         if(i%j==0)
        //         {
        //             dp[i]=min(dp[i],dp[j]+i/j);
        //         }
        //         j--;
        //     }
        // }
        // return dp[n];
          int ans = 0;
        if(n == 1)
            return ans;
        int prev = 1;
        for(int i = 1; i < n;){
            if(n % i == 0){
                ans = ans + 2;
                prev = i;
                i = i * 2;
                
            }else{
                i = i + prev;
                ans = ans + 1;
            }
        }
        return ans;
    }
};