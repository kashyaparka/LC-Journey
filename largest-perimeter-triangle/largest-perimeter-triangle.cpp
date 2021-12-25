class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // int k=nums.size();
        // if(nums[k-3]+nums[k-2]<nums[k-1] || nums[k-2]+nums[k-3]<nums[k-1] || nums[k-3]+nums[k-1]<nums[k-2])
        //     return 0;
        // int sum = accumulate(nums.end()-3,nums.end(),0);
        // return sum;
        for(int i=nums.size()-1;i>=2;i--)
            if(nums[i]<nums[i-1]+nums[i-2])
              return nums[i]+nums[i-1]+nums[i-2];
        return 0;
        
    }
};