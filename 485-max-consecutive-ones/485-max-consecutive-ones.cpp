class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
         int res=0,one=0;
         for(int i=0;i<nums.size();i++)
         {
             if(nums[i]==1)
                 one++;
             else
                 one=0;
             res=max(one,res);        
         }
        return res;
    }
};