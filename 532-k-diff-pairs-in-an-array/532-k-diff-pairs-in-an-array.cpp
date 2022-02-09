class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
      sort(nums.begin(),nums.end());
        int s = nums.size();
        int i=0;
        int count=0;
        int j=1;
        set<pair<int,int>> ss;
        while(i<s && j<s )
        {
            if(i!=j && abs(nums[i]-nums[j]) == k && ss.find({nums[i],nums[j]})==ss.end())
            {
                ss.insert({nums[i],nums[j]});
                count++;
                i++;
                j++;
                
            }
            else if(abs(nums[i]-nums[j]) > k)
            {
                i++;
            }
            else 
            {
                j++;
            }
            
        }
        return count;
           
    }
};