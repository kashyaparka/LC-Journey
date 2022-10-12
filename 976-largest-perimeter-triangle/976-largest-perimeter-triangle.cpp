class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
    
        
        int res=0;
         sort(nums.rbegin(),nums.rend());
        for(int i=0;i<nums.size()-2;i++)
        {
             if(nums[i]>=nums[i+1]+nums[i+2] || nums[i+1]>=nums[i]+nums[i+2] ||                        nums[i+2]>=nums[i+1]+nums[i])
               continue;
               int ans=nums[i]+nums[i+2]+nums[i+1];
               res=max(ans,res);
        }
        return res;
    }
};