#include<bits/stdc++.h>
int lcs(string s1, string s2)
{
       int m=s1.size(),n=s2.size();
    vector<vector<int>> dp(m+1,vector<int> (n+1,-1));
    for(int i=0;i<=m;i++) dp[i][0]=0;
    for(int j=0;j<=n;j++) dp[0][j]=0;
    for(int ind1=1;ind1<=m;ind1++)
        {
            for(int ind2=1;ind2<=n;ind2++)
            {
                if(s1[ind1-1]==s2[ind2-1])
                   dp[ind1][ind2]=1+dp[ind1-1][ind2-1];
                else
                dp[ind1][ind2]= max(dp[ind1-1][ind2],dp[ind1][ind2-1]);
            }
        }
    return dp[m][n];
}
int longestPalindromeSubseq(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        return lcs(s,t);
}
int minInsertion(string &str)
{
    int n=str.size();
    return n-longestPalindromeSubseq(str);
}