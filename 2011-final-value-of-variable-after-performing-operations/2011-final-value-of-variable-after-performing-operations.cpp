class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) 
    {
        int sum=0;
        for(auto x:operations)
        {
            if(x=="X++" || x=="++X")
                sum++;
            else 
                sum--;
        }
        return sum;
    }
};