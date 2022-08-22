class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        if(n==4 || n==16 || n==1) return true;
        while(n)
        {
            float t;
            if(n%4!=0) return false;
            n/=4;
            if(n==16) return true;
        }
        return false;
    }
};