class Solution {
public:
    int addDigits(int num) 
    {
       while(num%10!=num) 
       {
          int t=num%10;
          num/=10;
          t+=num;
          num=t;
       }
       return num;
    }
};