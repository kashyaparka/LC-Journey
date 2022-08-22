class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        //area=min(one,two)*abs(one-two);
        int n=height.size();
        int i=0,j=n-1;
        int res=INT_MIN;
        while(i<j)
        {
            int area=min(height[i],height[j])*abs(j-i);
            if(height[i]<height[j])
                i++;
            else if(height[i]>=height[j])
                j--;
            res=max(area,res);
        }
        return res;
    }
};