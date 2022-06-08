class Solution {
public:
    bool isPalindrome(string s)
    {
        if(s.length()==1) return true;
        int i=0,j=s.size()-1;
        while(i<=j)
        {
            if(s[i++]!=s[j--])
                return false;
        }
        return true;
    }
    int removePalindromeSub(string s) 
    {
        if(isPalindrome(s))
            return 1;
        else return 2;
    }
};