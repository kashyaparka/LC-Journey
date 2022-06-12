class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) 
    {
        int sum=0;
        unordered_set<int> hset;
        int ans=0;
        for(int i=0,j=0,sum=0;j<nums.size();j++)
        {
            while(hset.find(nums[j])!=hset.end())
            {
                hset.erase(nums[i]);
                sum-=nums[i];
                i++;    
            }
            hset.insert(nums[j]);
            sum+=nums[j];
            ans=max(sum,ans);
            
        }
        return ans;
    }
};