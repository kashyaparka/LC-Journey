class Solution {
public:
    bool checkPerfectNumber(int num) 
    {
        int sum=0;
        int i=1;
        for(;i<=num/2;i++)
        {
            if(num%i==0)
                sum+=i;
        }
        return sum==num;
    }
};