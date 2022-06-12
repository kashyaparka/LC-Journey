class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) 
    {
        int i=0,j=0;
        int sum=0;
        map<int,int> map;
        int ans=0;
        while(j<nums.size())
        {
            while(map.find(nums[j])!=map.end())
            {
               // cout<<sum<<" "<<i<<" "<<nums[i];
                map.erase(nums[i]);
                sum-=nums[i];
                i++;
            }
            sum+=nums[j];
            map[nums[j]]=j;
            j++;
            ans=max(ans,sum);
        }
        return ans;
    }
};