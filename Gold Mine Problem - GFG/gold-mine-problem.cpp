// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
   
class Solution{
//private:
 
public:
    int solve(int n,int m,vector<vector<int>>& M,vector<vector<int>> &dp,int i,int j)
    {
        if(j==m-1)
        {
            dp[i][j]=M[i][j];
            return M[i][j];
        }
        if(dp[i][j]!=-1) 
            return dp[i][j];
         int a=0,b=0,c=0;
        if(i-1>=0 && j+1<m)
        {
           if(dp[i-1][j+1]==-1)
              a=solve(n,m,M,dp,i-1,j+1);
           else
              a=dp[i-1][j+1];
        }
        if(j+1<m)
        {
           if(dp[i][j+1]==-1)  
              b=solve(n,m,M,dp,i,j+1);
           else 
              b=dp[i][j+1];
        }
        if(i+1<n && j+1<m)
        {
           if(dp[i+1][j+1]==-1)
              c=solve(n,m,M,dp,i+1,j+1);
           else 
              c=dp[i+1][j+1];
        }
         dp[i][j]=M[i][j]+max(a,max(b,c));
         return dp[i][j];
        
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    { 
        //recursion with memoization
        // vector<vector<int>> dp(n,vector<int> (m,-1));
        // int res=INT_MIN;
        // for(int i=0;i<n;i++)
        // {
        //     res=max(solve(n,m,M,dp,i,0),res);
        // }
        // return res;
        
        //bottom up
        vector<vector<int>> dp(n,vector<int> (m+1,-1));
        for(int i=0;i<n;i++)
        {
            dp[i][m-1]=M[i][m-1];
        }
        int a=0,b=0,c=0;
        for(int j=m-2;j>=0;j--)
        {
            for(int i=0;i<n;i++)
            {
                if(i-1>=0)
                {
                      a=dp[i-1][j+1];
                }
                else a=INT_MIN;
                      b=dp[i][j+1];
                
                if(i+1<n)
                {
                      c=dp[i+1][j+1];
                }
                else c=INT_MIN;
                dp[i][j]=M[i][j]+max(a,max(b,c));
            }
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            res=max(res,dp[i][0]);
        }
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}  // } Driver Code Ends