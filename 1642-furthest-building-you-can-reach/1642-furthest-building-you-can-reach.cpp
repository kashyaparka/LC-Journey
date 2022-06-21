class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) 
    {
       priority_queue<int> q;
       int i;
       for(i=1;i<heights.size();i++)
       {
           if(heights[i-1]>=heights[i])
               continue;
           int d=heights[i]-heights[i-1];
           if(bricks>=d)
           {
               bricks-=d;
               q.push(d);
           }
           else if(ladders>0)
           {
               if(q.size())
               {
                   int x=q.top();
                   if(x>d)
                   {
                       bricks+=x;
                       q.pop();
                       q.push(d);
                       bricks-=d;
                   }
               }
               ladders--;
           }
           else break;
       }
       return i-1;
    }
};