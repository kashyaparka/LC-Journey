class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) 
    {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        int subsum=0;
        for(int i=n-1;i>=0;i--)
        {
            ans.push_back(nums[i]);
            subsum+=nums[i];
            sum-=nums[i];
            if(subsum>sum)
                break;
        }
        return ans;
    }
};