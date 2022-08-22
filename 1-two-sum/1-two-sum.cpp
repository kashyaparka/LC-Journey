class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int>map;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int k=target-nums[i];
            if(map.find(k)!=map.end())
            {
                auto it=map.find(k);
                ans.push_back(i);
                ans.push_back(it->second);
                break;
            }
            map[nums[i]]=i;
        }
        return ans;
    }
};