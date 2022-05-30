class Solution {
public:
    vector<int>  bits(int n,vector<int>&v)
    {
        int i=0;
        while(n!=0)
        {
            if(n&1) v[i++]=1;
            else v[i++]=0;
            n=n>>1;
        }
        return v;
    }
    int minBitFlips(int start, int goal) 
    {
           vector<int> v1(31,0);
           v1=bits(start,v1);
           vector<int> v2(31,0);
           v2=bits(goal,v2);
           int c=0;
           for(int i=0;i<v2.size();i++)
           {
               if(v1[i]!=v2[i])
                   c++;
           }
           return c;
    }
};