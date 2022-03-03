class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int prev=0;
        int slices=0;
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])
                prev=prev+1;
            else
                prev=0;
            slices+=prev;
        }
        return slices;
    }
};