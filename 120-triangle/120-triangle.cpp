#include<bits/stdc++.h>
class Solution {
public:
//    int minimumTotal(vector<vector<int>>& t) {
    //      int n = triangle.size();
    // vector<int> minlen(triangle.back());
    // for (int layer = n-2; layer >= 0; layer--) // For each layer
    // {
    //     for (int i = 0; i <= layer; i++) // Check its every 'node'
    //     {
    //         // Find the lesser of its two children, and sum the current value in the triangle with it.
    //         minlen[i] = min(minlen[i], minlen[i+1]) + triangle[layer][i]; 
    //     }
    // }
    // return minlen[0];
    // }

    int minimumTotal(vector<vector<int>>& t)
    {
        int n=t.size();
        vector<vector<int>> dp(n,vector<int> (n,0));
        for(int i=0;i<n;i++)
            dp[n-1][i]=t[n-1][i];
        for(int i=n-2;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
                dp[i][j]=t[i][j];
                dp[i][j]+=min(dp[i+1][j],dp[i+1][j+1]);
            }
        }
        return dp[0][0];
    }

};