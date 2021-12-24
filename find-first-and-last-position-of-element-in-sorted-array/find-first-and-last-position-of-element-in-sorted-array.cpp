class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        if((nums.size()==1 && nums[0]!=target)|| nums.size()==0)
            return vector<int> {-1,-1};
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                ans.push_back(i);
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==target)
            {
                ans.push_back(i);
                break;
            }
        }
        return ans.size()==0?vector<int> {-1,-1}:ans;
    }
};