class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        vector<int> v=nums;
        sort(v.begin(),v.end());
        int sum=0;
        for(int i=0;i<v.size();i=i+2)
        {
            sum+=v[i];
        }
        return sum;
    }
};