class Solution {
public:
    int triangleNumber(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        int count=0;
        for(int k=n-1;k>=1;k--)
        {
            int j=k-1; 
            int i=0;
            while(i<j)
            {
                if(nums[i]+nums[j]>nums[k])
                {
                    count+=j-i;
                    j--;
                }
                else
                    i++;
            }
        }
        return count;
    }
};