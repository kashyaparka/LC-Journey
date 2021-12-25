class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) 
    {
        unordered_map<string,int> umap;
        for(auto it : arr)
            umap[it]++;
        vector<string> s;
        unordered_map<string,int>::iterator it;
        for(auto it : arr)
        {
            if(umap[it]==1)
                s.push_back(it);
        }
        return k>s.size()?"":s[k-1];
    }
};