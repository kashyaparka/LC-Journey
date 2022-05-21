class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    { 
      vector<int> dummy=nums;
      //sort(dummy.begin(),dummy.end());
      vector<int> ans(nums.size(),0);
      //8 1 2 2 3
      //1 2 2 3 8
      for(int i=0;i<ans.size();i++)
      {
          int c=0;
          for(int j=0;j<nums.size();j++)
          {
              if(nums[j]<nums[i] && i!=j)
                  c++;
          }
          ans[i]=c;
      }
      return ans;
    } 
};