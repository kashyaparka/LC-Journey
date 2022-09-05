class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int jump=0;
        int maximum_reach=0;
        int current_position=0;
        int len=nums.size();
        for(int index=0;index<len-1;index++)
        {
            maximum_reach=max(maximum_reach,index+nums[index]);
            if(current_position>=nums.size()-1)
            {
                break;
            }
            if(index==current_position)
            {
                current_position=maximum_reach;
                jump++;
            }
        }
        return jump;
    }
};