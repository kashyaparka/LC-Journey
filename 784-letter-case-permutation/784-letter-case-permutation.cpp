class Solution {
public:
    void backtrack(vector<string> &v,string s,int i)
    {
        if(i==s.size())
        {
            v.push_back(s);
            return;
        }
        if(isdigit(s[i]))
                backtrack(v,s,i+1);
        else if(s[i]>='a' && s[i]<='z')
        {
                backtrack(v,s,i+1);
                s[i]+='A'-'a';
                backtrack(v,s,i+1);
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
                backtrack(v,s,i+1);
                s[i]+='a'-'A';
                backtrack(v,s,i+1);
        }
            
    }
    vector<string> letterCasePermutation(string s) 
    {
        vector<string> v;
        backtrack(v,s,0);
        return v;
    }
};