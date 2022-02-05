class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& a) 
    {
       int n=a.size();
       int m=a[0].size();
       if(n==0) return 0;
       if(n+m==2) return a[0][0];
       vector<vector<int>> dp(n,vector<int> (m,0));
       for(int j=0;j<m;j++)
       {
           dp[0][j]=a[0][j];
       }
       for(int i=1;i<n;++i)
       {
           for(int j=0;j<m;++j)
           {
               int ld=a[i][j];
               if(j-1>=0)
                   ld+=dp[i-1][j-1];
               else
                   ld+=1e9;
               int rd=a[i][j];
               if(j+1<m)
                    rd+=dp[i-1][j+1];
               else
                    rd+=1e9;
               int d=a[i][j]+dp[i-1][j];
               dp[i][j]=min(d,min(ld,rd));
           }
       }
       int mi=dp[n-1][0];
       for(int j=0;j<m;++j)
       {
           mi=min(mi,dp[n-1][j]);
       }
       return mi;
    }
};