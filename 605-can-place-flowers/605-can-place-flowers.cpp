class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        vector<int> copy;
        copy.push_back(0);
        for(auto i : flowerbed)
            copy.push_back(i);
        copy.push_back(0);
        for(int i=1;i<copy.size()-1;i++)
        {
            if(copy[i-1]+copy[i]+copy[i+1]==0)
            {
                n--;
                ++i;
            }
        }
        return n<=0;
    }
};