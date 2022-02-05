class Solution {
public:
    int uniquePaths(int m, int n) 
    {
     //   vector<vector<int>> v(m+1,vector<int> (n+1,0));
        long int v[m+1][n+1];
        if(m==0 && n==0)
            return 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
            v[i][0]=1;
            v[0][j]=1;
            }
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                v[i][j]=v[i-1][j] + v[i][j-1];
            }
        }
        return v[m-1][n-1];
    }
};