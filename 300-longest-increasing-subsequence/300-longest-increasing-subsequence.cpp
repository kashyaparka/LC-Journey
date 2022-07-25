#include<bits/stdc++.h>
class Solution {
public:
    int f(vector<int>& nums,int i,int p, vector<vector<int>> &dp)
    {
        if(i==nums.size()) return 0; 
            
        if(dp[i][p+1]!=-1) return dp[i][p+1];
        
        int len=f(nums,i+1,p,dp);
        if(p==-1 || nums[i]>nums[p])
        {
            len=max(len,1+f(nums,i+1,i,dp));
        }
        return dp[i][p+1]=len;
    }
    int lengthOfLIS(vector<int>& nums) 
    {
    //     int n=nums.size();
    //     vector<vector<int>> dp(n,vector<int> (n+1,-1));
    //     return f(nums,0,-1,dp);
        
        vector<int> temp;
        temp.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>temp.back())
                temp.push_back(nums[i]);
            else{
                int ind = lower_bound(temp.begin(),temp.end(),nums[i])-temp.begin();
                temp[ind]=nums[i];
            }
        }
        return temp.size();
    }
};