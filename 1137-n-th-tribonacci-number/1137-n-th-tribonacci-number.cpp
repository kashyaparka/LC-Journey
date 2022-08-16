class Solution {
public:
    int tribonacci(int n) {
         int t[n+3];
        if(n==0)
             return 0;
        if(n==1 || n==2)
             return 1;
       
        t[0] = 0;
        t[1] = 1;    
        t[2] = 1;
        for(int i=3;i<=n;i++)
            t[i] = t[i-3]  + t[i-1] + t[i-2];
         
        return t[n];
    }
};