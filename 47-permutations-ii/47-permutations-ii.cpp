class Solution {
public:
     void  backtrack(vector<int> &nums,int index,set<vector<int>> &ans)
     {
        if(index>=nums.size())
        {
            ans.insert(nums);
            return;
        }
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[index],nums[i]);
            backtrack(nums,index+1,ans);
            swap(nums[index],nums[i]);
        }      
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        set<vector<int>> ans;
        //backtrack(nums,0,nums.size()-1,ans);
        backtrack(nums,0,ans);
        vector<vector<int>> res={ans.begin(),ans.end()};
        return res;
    }
};