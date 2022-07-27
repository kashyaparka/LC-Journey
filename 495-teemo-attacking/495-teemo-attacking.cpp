class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) 
    {
        //5+5+5+
        int res=0;
        for(int i=0;i<t.size()-1;i++)
        {
            if(t[i+1]-t[i]<=d-1)
                res+=t[i+1]-t[i];
            else
                res+=d;
        }
        return res+d;
    }
};