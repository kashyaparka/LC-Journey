class Solution {
public:
    int help(int n)
    {
        int step=0;
        while(n!=1)
        {
            step++;
            if(n%2==0) n=n/2;
            else n=n*3+1;
        }
        return step;
    }
    int getKth(int lo, int hi, int k) 
    {
        vector<pair<int,int>> v;
        for(int i=lo;i<=hi;i++)
        {
            v.push_back(make_pair(help(i),i));
        }
        sort(v.begin(),v.end());
                        
        return v[k-1].second;
    }
};