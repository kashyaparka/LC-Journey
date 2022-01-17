class Solution {
public:
    // void backtrack(vector<int>& nums, int i, int j,vector<vector<int>> &ans)
    // {
    //     if(i>=j)
    //     {
    //         ans.push_back(nums);i=i-1;
    //         return;
    //     }
    //    // swap(nums[i],nums[j]);
    //     backtrack(nums,i+1,j,ans);
    //     swap(nums[i],nums[j]);
    //     backtrack(nums,i+1,j,ans);
    //     swap(nums[i],nums[j]);
    // }
   void  backtrack(vector<int> &nums,int index,vector<vector<int>> &ans)
    {
        if(index>=nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[index],nums[i]);
            backtrack(nums,index+1,ans);
            swap(nums[index],nums[i]);
        }
            
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
       vector<vector<int>> ans;
       //backtrack(nums,0,nums.size()-1,ans);
        backtrack(nums,0,ans);
       return ans;
    }
};