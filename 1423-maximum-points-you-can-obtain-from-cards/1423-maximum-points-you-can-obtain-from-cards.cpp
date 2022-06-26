class Solution {
public:
   // Time: 25+
   //solution dekha
    int maxScore(vector<int>& cp, int k) 
    {
        int res=0,ans=0;
        for(int i=0;i<k;i++)
            ans+=cp[i];
        res=ans;
        for(int i=k-1;i>=0;i--)
        {
            res-=cp[i];
            res+=cp[cp.size()-k+i];
            ans=max(res,ans);
        }
        return ans;
    }
};