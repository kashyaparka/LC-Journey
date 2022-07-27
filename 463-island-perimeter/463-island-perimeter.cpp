class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) 
    {
        int land=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                    land++;
            }
        }
        land=land*4;
        for(int i=0;i<grid.size();i++)
        {
            int t=0;
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    if(i>0 && grid[i-1][j]==1)
                        t++;
                    if(j>0 && grid[i][j-1]==1)
                        t++;
                }
            }
            land-=2*t;
        }
        return land;
    }
};