class Solution {
public:
    string convertBinary(int num)
    {
        string s="";
        while(num)
        {
            int i=num%2;
            s.push_back(i);
            num/=2;
        }
        //reverse(s.begin(),s.end());
        cout<<s<<" ";
        return s;
    }
    int findComplement(int num) 
    {
        string s=convertBinary(num);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==0)
                s[i]=1;
            else 
                s[i]=0;
        }
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            ans+=pow(2,i)*s[i];
        }
        return ans;
    }
};