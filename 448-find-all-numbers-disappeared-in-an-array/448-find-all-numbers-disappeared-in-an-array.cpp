class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        int n=nums.size();
        map<int,int> map;
        for(int i=0;i<nums.size();i++)
               map[nums[i]]++;    
    
        vector<int> ans;
        for(int i=1;i<=nums.size();i++)
        {
            if(map.find(i)==map.end())
                ans.push_back(i);
        }
        return ans;
    }
};