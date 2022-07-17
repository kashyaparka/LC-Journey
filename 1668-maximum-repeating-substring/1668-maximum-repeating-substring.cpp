class Solution {
public:
    int maxRepeating(string s, string w) 
    {
         int k=0;
         string temp=w;
         while(s.find(temp)!=string::npos)
         {
             temp+=w;
             k++;
         }
         return k;
    }
};