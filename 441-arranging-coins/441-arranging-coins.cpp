class Solution {
public:
    int arrangeCoins(int n) 
    {
        if(n==0 || n<0) return 0;
        if(n==1) return 1;
        int  i=1;
        int ans=0;
        while(n>0)
        {
            if(n>i || n==i)
            {
               n-=i;
               ans++;
            }
            else 
                return ans;
            i++;
            if(n<i) return ans;
        }
        return 0;
    }
};