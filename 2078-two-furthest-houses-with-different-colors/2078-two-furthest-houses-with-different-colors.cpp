class Solution {
public:
    int maxDistance(vector<int>& colors) {
        //wrong
        // int dist=1;
        // int maxdist=0;
        // int n=colors.size();
        // if(colors[0]!=colors[n-1])
        //     return n-1;
        // for(int i=0;i<colors.size();i++)
        // {
        //     dist=1;
        //     for(int j=i+1;j<colors.size();j++)
        //     {
        //         if(colors[i]==colors[j])
        //             dist++;
        //         else
        //         {
        //             maxdist=max(dist,maxdist);
        //             dist=0;
        //         }
        //     }
        // }
        // return maxdist;
        int from_left = 0, n = colors.size(), from_right = n - 1;
        while (colors[from_left] == colors[n-1]) from_left++;
        while (colors[from_right] == colors[0]) from_right--;
        return max(from_right, n-from_left-1);
    }
};