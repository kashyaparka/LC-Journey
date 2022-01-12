class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) 
    {
        int negnum=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
            if(nums[i]<0)
                negnum++;
        if(negnum==0)
        {
            while(k)
            {
                nums[0]=-nums[0];
                k--;
            }
        }
        else if(negnum>0)
        {
            int i=0;
            while(k)
            {   
                i=i%n;
                if(nums[i]<0)
                {
                    nums[i]=-nums[i];
                    i++;
                    k--;
                }
                else
                {  
                    sort(nums.begin(),nums.end());
                    nums[0]=-nums[0];
                    k--;
                }
            }
        }
        int sum=0;
        for(int j=0;j<nums.size();j++)
            sum +=  nums[j];
        return sum;
    }
};