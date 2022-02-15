class Solution
{
public:
//     bool isPalindrome(string s)
//     {
//         int i = 0, j = s.size() - 1;

//         while (i < j)
//         {
//             if (s[i++] != s[j--])
//                 return false;
//         }
//         return true;
//     }

//     string longestPalindrome(string s)
//     {
//         int n = s.size();
//         if (n == 0)
//             return "";

//         if (n == 1)
//             return s;

//         string result = "";
//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = 1; j <= n - i; j++)
//             {
//                 if (isPalindrome(s.substr(i, j)))
//                 {
//                     if (result.size() < j)
//                         result = s.substr(i, j);
//                 }
//             }
//         }
//         return result;
//     }
    string longestPalindrome(string s)
        {
        int n=s.length(),start=0,len=0,dp[n][n];
        memset(dp,false,sizeof(dp));
        for(int i=0;i<n;i++)
        {
            dp[i][i]=true;
            len=1;
            start=i;
        }
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=true;
                start=i;
                len=2;
            }
        }
        for(int k=3;k<=n;k++)
        {
            for(int i=0;i<=n-k;i++)
            {
                int j=i+k-1;
                if(s[i]==s[j] && dp[i+1][j-1])
                {
                    dp[i][j]=true;
                    start=i;
                    len=max(len,k);
                }
            }
        }
        return s.substr(start,len);
    }
};