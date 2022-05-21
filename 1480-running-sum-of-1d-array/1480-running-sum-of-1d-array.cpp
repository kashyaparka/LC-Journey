class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector<int> ans;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i>=1)
            nums[i]+=nums[i-1];
            ans.push_back(nums[i]);
        }
        return ans;
    }
};