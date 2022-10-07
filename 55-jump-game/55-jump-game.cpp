class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int rechable=0;
        for(int i=0;i<nums.size();i++)
        {
            if(rechable<i) return false;
            
            rechable=max(rechable,i+nums[i]);
        }
        return true;
    }
};