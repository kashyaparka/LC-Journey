class Solution {
public:
    int climbStairs(int n) 
    {
        if ( n == 0 ) return 0;
        else if ( n == 1 ) return 1;
        else if ( n == 2 ) return 2;
        vector<int> t(n+1,0);
        t[0]=1;
        t[1]=2;
        for(int i=2;i<n;i++)
        {
             t[i]=t[i-1]+t[i-2];
        }
        return t[n-1];
 
    }
};