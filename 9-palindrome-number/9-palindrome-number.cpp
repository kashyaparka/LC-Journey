class Solution {
public:
    bool palin(string s)
    {
        int i=0,j=s.size()-1;
        while(i<=j)
        {
            if(s[i++]!=s[j--])
                return false;
        }
        return true;
    }
    bool isPalindrome(int x) 
    {
        string s=to_string(x);
        return palin(s);
    }
};