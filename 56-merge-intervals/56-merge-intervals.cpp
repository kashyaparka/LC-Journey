class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) 
    {
        if(in.size()<=1) return in;
        sort(in.begin(),in.end());
        vector<vector<int>> output;
        output.push_back(in[0]);
        for(int i=1;i<in.size();i++)
        {
            if(output.back()[1]>=in[i][0]) output.back()[1]=max(output.back()[1],in[i][1]);
            else output.push_back(in[i]);
        }
        return output;
    }
};