class Solution {
public:
    vector<string> matchPrefix(int i,vector<string>& p, string s)
    {
        vector<string> temp;
        string t=s.substr(0,i);
        for(int j=0;j<p.size() && temp.size()<3;j++)
        {
            if(t==p[j].substr(0,i))
                temp.push_back(p[j]);
        }
        sort(temp.begin(),temp.end());
        return temp;
    }
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) 
    {
        vector<vector<string>> res;
        sort(products.begin(),products.end());
        for(int i=1;i<searchWord.size()+1;i++)
        {
            res.push_back(matchPrefix(i,products,searchWord));
        }
        return res;
    }
};

