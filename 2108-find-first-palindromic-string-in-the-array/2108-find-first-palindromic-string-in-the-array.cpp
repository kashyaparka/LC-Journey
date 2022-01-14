class Solution {
public:
    bool ispalindrome(string& s, int i,int j)
    {
        if(i>=j)
            return true;
        if(s[i]==s[j])
            return ispalindrome(s,i+1,j-1);
        else
            return false;
    }
    string firstPalindrome(vector<string>& words) 
    {
        for(auto it : words)
        {
            if(ispalindrome(it,0,it.size()-1)==true)
                return it;
        }
        return "";
    }
};