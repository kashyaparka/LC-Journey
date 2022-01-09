class Solution {
public:
    bool isRobotBounded(string instructions){
    int dir[5]={1,0,-1,0,1};
    int x=0;
    int y=0;
    int add=3;
    int temp=4;    
    while(temp--)
    {
        for(int i=0;i<instructions.size();i++)
        {
            if(instructions[i]=='G')
            {
                x+=dir[add];
                y+=dir[add+1];
            }
            else if(instructions[i]=='L')
            {
                add = (add-1+4)%4;
            }
            else 
            {
                add=(add+1)%4;
            }
        }
        if(x==0 && y==0)
            return true;
    }
        return false;
    }
};