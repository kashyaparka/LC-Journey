class Solution {
public:
    vector<int> getRow(int numRows) 
    {
        vector<vector<int>> dp;
        for(int i=0;i<=numRows;i++)
        {
            vector<int> row(i+1,1);
            for(int j=1;j<i;j++)
            {
                row[j]=dp[i-1][j-1]+dp[i-1][j];
            }
            dp.push_back(row);        
        }
        return dp[numRows];   
    }
};