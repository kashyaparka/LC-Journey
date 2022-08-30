class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        for(auto &itr:matrix)
        {
                auto x=lower_bound(itr.begin(),itr.end(),target);
                if(x!=itr.end() && *x==target) return true;
        }
        return false;
    }
};