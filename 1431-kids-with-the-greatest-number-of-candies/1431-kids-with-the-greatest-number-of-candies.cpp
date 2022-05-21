class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool> ans(candies.size(),false);
        int mx=INT_MIN;
        for(int i=0;i<candies.size();i++)
        {
            mx=max(mx,candies[i]);
        }
        for(int i=0;i<candies.size();i++)
        {
            int k=candies[i]+extraCandies;
            if(k>=mx)
                ans[i]=true;
        }
        return ans;
    }
};