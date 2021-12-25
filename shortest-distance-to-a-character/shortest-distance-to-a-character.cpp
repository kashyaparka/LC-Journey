class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int> v;
        vector<int> res;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==c)
                v.push_back(i);
        }
        for(int i=0;i<s.size();i++)
        {
            int mn=INT_MAX;
            for(int j=0;j<v.size();j++)
            {
               mn=min(mn,abs(v[j]-i));   
            }
            res.push_back(mn);
        }
        return res;
    }
};