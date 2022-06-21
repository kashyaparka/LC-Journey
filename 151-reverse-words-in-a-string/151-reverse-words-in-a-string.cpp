class Solution {
public:
    string reverseWords(string s) 
    {
        string ans="";
        string temp="";
        int i=s.size()-1;
        bool flag=true;
        while(i>=0)
        {
           if(s[i]==' ' && flag==true)
           {
              // i--;
           }
           else if(s[i]!=' ' || flag==false)
           {
               if(s[i]!=' ') temp+=s[i];
               flag=false;
               if(s[i]==' ' || i==0 )
               {    
                   reverse(temp.begin(),temp.end());
                   ans+=temp;
                   ans+=' ';
                   temp.clear();
                   // while(i>=0 && s[i]==' ')
                   // {
                   //     i--;
                   //     flag=true;
                   // }
                   flag=true;
               }
           }
           i--;
        }
        ans.pop_back();
        return ans;
       
    }
};