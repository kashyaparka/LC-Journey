class Solution {
    public:
    void nextPermutation(vector<int>& nums) 
    {
        //next_permutation(nums.begin(),nums.end())
        int k,l;
        for(k=nums.size()-2;k>=0;k--)
        {
            if(nums[k]<nums[k+1]) {break;}
        }
        if(k<0) reverse(nums.begin(),nums.end());
        else{
            for(l=nums.size()-1;l>=0;l--)
            {
                if(nums[l]>nums[k])
                    break;
            }
            swap(nums[l],nums[k]);
            reverse(nums.begin()+k+1,nums.end());
        }
        
    }
};