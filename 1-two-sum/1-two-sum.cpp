class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
         map<int,int> map;
        vector<int> ans;
         for(int i=0;i<n;i++)
         {
             int t=target-nums[i];
             if(map.find(t)!=map.end())
             {
                 auto it=map.find(t);
                 ans.push_back(i);
                 ans.push_back(it->second);
             }
             map[nums[i]]=i;
         }
        return ans;
    }
};