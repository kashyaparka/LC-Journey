class Solution {
public:
    string getSmallestString(int n, int k) 
    {
        string ans="";
        for(int i=0;i<n;i++)
        {
            ans+='a';
            k--;
        }
        int b=ans.size()-1;
        while(k>=26)
        {
            ans[b--]='z';
            k+=1;
            k-=26;
        }
        if(k!=0)
            ans[b]='a'+k;
        return ans;
    }
};