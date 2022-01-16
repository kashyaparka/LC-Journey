class Solution {
public:
    void backtrack(vector<int>& v,vector<int>  &candi,int i,int t,vector<vector<int>> &ans)
    {
          if(i==candi.size()) 
          {
                   if(t==0)
                    {
                        ans.push_back(v);
                    }
                    return;
           }
           if(candi[i]<=t)
           {
            v.push_back(candi[i]);
            backtrack(v,candi,i,t-candi[i],ans);
            v.pop_back();
           }
            backtrack(v,candi,i+1,t,ans);
    
    }
    vector<vector<int>> combinationSum(vector<int>& candi, int t) 
    {
        vector<vector<int>> ans;
        vector<int> v;
        int sum=0;
        backtrack(v,candi,0,t,ans);
        return ans;
    }
};