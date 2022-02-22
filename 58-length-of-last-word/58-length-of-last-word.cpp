class Solution {
public:
    int lengthOfLastWord(string s) 
    {
       int c=0;
       int k=0;
       for(int i=s.size()-1;i>=0;i--)
       {
           if(k==2) break;
           if((s[i]!=' ' && k==0) || (s[i]==' ' && k==1))
               k++;
           if(k==1)
           c++;
       }
       return c;
    }
};