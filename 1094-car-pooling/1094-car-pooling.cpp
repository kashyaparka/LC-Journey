class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) 
    {
        map<int,int> map;
        int n=trips.size();
        for(int i=0;i<n;i++)
        {
            int start=trips[i][1];
            int end=trips[i][2];
            map[start]+=trips[i][0];
            map[end]-=trips[i][0];
        }
        int sum=0;
        for(auto it:map)
        {
            sum+=it.second;
            if(sum>capacity)
                 return false;
        }
        return true;
    }
};