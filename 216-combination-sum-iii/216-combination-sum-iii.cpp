class Solution {
public:
    void backtrack(vector<int>& v,vector<vector<int>>& ans,int i,int n,int k)
    {
       if(n<0) return;
       if(n==0 && v.size()==k)
       {
           ans.push_back(v);
           return;
       }
       if(i>9) return;
       v.push_back(i);
       backtrack(v,ans,i+1,n-i,k);
       v.pop_back();
       backtrack(v,ans,i+1,n,k);
    }
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        vector<int> v;
        vector<vector<int>> ans;
        backtrack(v,ans,1,n,k);
        return ans;
    }
};