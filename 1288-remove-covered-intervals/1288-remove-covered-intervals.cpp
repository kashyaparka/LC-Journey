class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int a=nums[0][0];
        int b=nums[0][1];
        int res=1;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i][0] > a && nums[i][1] > b)
                ++res;
           if(nums[i][1]>b)
           {
                a = nums[i][0];
                b = nums[i][1];
            }
        }
        return res;
    }
};