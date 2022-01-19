class Solution {
public:
    void backtrack(set<vector<int>> &ans,vector<int> &v,int i,vector<int>& nums)
    {
      //  if(i>=nums.size())
        //{
            ans.insert(v);
          //  return;
        //}
        for(int j=i;j<nums.size();j++)
        {
             if (j == i || nums[j] != nums[j - 1]){
        v.push_back(nums[j]);
        backtrack(ans,v,j+1,nums);
        v.pop_back();
             }
        }
        //backtrack(ans,v,i+1,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        set<vector<int>> ans;
        vector<int> v;
        sort(nums.begin(),nums.end());
        backtrack(ans,v,0,nums);
        vector<vector<int>> res={ans.begin(),ans.end()};
        return res;
    }
};