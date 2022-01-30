class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
            if ((nums.size() == 0) || (k <= 0))
            {
                return;
            }
            vector<int> numsCopy=nums;
            for (int i = 0; i < nums.size(); i++)
            {
                nums[(i + k)%nums.size()] = numsCopy[i];
            }
    }
};