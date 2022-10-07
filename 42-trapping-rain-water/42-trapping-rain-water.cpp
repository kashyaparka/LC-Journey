class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n=height.size();
        vector<int> leftv(n,0);
        vector<int> rightv(n,0);
        leftv[0]=height[0];
        rightv[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            if(height[i]>leftv[i-1])
                leftv[i]=height[i];
            else leftv[i]=leftv[i-1];
        }
        for(int i=n-2;i>=0;i--){
            if(height[i]>rightv[i+1])
                rightv[i]=height[i];
            else rightv[i]=rightv[i+1];
        }
        vector<int> totalwater(n,0);
        for(int i=0;i<n;i++){
            totalwater[i]=min(leftv[i],rightv[i])-height[i];
        }
        int netWaterStored = accumulate(totalwater.begin(),totalwater.end(),0);
        return netWaterStored;
        
    }
};