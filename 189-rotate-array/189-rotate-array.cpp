class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
            // if ((nums.size() == 0) || (k <= 0))
            // {
            //     return;
            // }
            // vector<int> numsCopy=nums;
            // for (int i = 0; i < nums.size(); i++)
            // {
            //     nums[(i + k)%nums.size()] = numsCopy[i];
            // }
            if(nums.size()==0 || k<=0 || nums.size()==1)
                 return;
            reverse(nums.begin(),nums.end());
            //7 6 5 4 3 2 1
            reverse(nums.begin(),nums.end()-nums.size()+k%nums.size());
            //5 6 7 4 3 2 1
            reverse(nums.begin()+k%nums.size(),nums.end());
            //5 6 7 1 2 3 4
    }
};