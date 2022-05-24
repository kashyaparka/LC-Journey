class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int mx=INT_MIN;
       for(int i=1;i<gain.size();i++)
       {
           gain[i]+=gain[i-1];
       }
       for(int i=0;i<gain.size();i++)
       {
           mx=max(mx,gain[i]);
       }
        return mx>0?mx:0;
    }
};