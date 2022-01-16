class Solution {
public:
    set<vector<int>> ans;
    void backtrack(vector<int> &v,vector<int> &nums,int i)
    {
        if(nums.size()==i)
        {
            ans.insert(v);
            return;
        }
        backtrack(v,nums,i+1);
        v.push_back(nums[i]);
        backtrack(v,nums,i+1);
        v.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
           vector<int> v;
           backtrack(v,nums,0);
           vector<vector<int> > res{ans.begin(),ans.end()};
        return res;
        
    }
};