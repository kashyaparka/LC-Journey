bool cmp(const string x, const string y)
{
        return x.size()<y.size();
}
class Solution {
public:
    int longestCommonSubsequence(string &text1, string &text2) {
        int n=text1.size();
        int m=text2.size();
        int t[n+2][m+2];
        memset(t, 0, sizeof(t));
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(text1[ i - 1] == text2[j-1])
                {
                    t[i][j] = 1+ t[i-1][j-1];
                }
                else
                    t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
        return t[n][m];
    }
    int longestStrChain(vector<string>& words) 
    {
        int c=1;
        vector<int> dp(words.size(),1);
        sort(words.begin(),words.end(),cmp);
        for(int i = 1;i<words.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(words[i].length()-words[j].length()==1 && longestCommonSubsequence(words[i],words[j])==words[j].size() && dp[i]<dp[j]+1)
                {
                      dp[i] = dp[j] + 1;
                }
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};