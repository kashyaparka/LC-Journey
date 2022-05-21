class Solution {
public:
    int mostWordsFound(vector<string>& sentences) 
    { 
       int mx=INT_MIN;
       for(auto &str:sentences) 
       {
               stringstream s(str);
               string word;
               int c=0;
               while(s>>word)
                   c++;
               mx=max(c,mx);
       }
       return mx;
    }
};