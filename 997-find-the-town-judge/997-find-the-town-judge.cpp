class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        vector<int> intdeg(n+1,0);
        vector<int> outdeg(n+1,0);
        for(int i=0;i<trust.size();i++)
        {
            intdeg[trust[i][1]]++;
            outdeg[trust[i][0]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(intdeg[i]==n-1 && outdeg[i]==0)
                return i;
        }
        return -1;
    }
};