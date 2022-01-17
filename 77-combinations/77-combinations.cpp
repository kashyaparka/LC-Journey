class Solution {
public:
    void backtrack(vector<int>& v,vector<vector<int>> &ans,int i,int n,int k)
    {
        if(i>k)
        {
            ans.push_back(v);
            return;
        }
        for(int j=i;j<=n;j++)
        {
               if(v.size()!=0 && v[v.size()-1]>=j)
               {
                 continue;
               }
            v.push_back(j);
            backtrack(v,ans,i+1,n,k);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) 
    {
        vector<int> v;
        vector<vector<int>> ans;
        backtrack(v,ans,1,n,k);
        return ans;
    }
};