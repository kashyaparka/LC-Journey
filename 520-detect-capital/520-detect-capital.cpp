class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        vector<int> v(word.size(),0);
        for(int i=0;i<word.size();i++)
        {
            if(word[i]>='A' && word[i]<='Z')
                v[i] = 0;
            else if(word[i]>='a' && word[i]<='z')
                v[i] = 1;
        }
        int sum=accumulate(v.begin(),v.end(),0);
        if(sum==0)
            return true;
        else if(sum ==word.size())
            return true;
        else if(v[0]==0 && sum==word.size()-1)
            return true;
        
        return false;
    }
};