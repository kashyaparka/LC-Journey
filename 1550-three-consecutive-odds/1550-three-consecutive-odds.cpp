class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) 
    {
        int c=3;
        for(auto i : arr)
        {
            if(c==0) return true;
            
            if(i%2==0 && c==2) c=3;
            else if(i%2==0 && c==1) c=3;
            else c--;
        }
        return c==0?true:false;
    }
};