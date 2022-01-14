bool cmp(vector<int>& a, vector<int>& b) {
   // if(a[1] == b[1]) return a[0]<b[0];
    return a[1] < b[1];}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
           sort(intervals.begin(),intervals.end(),cmp);
           int ans=0;
           vector<int> arrow = intervals[0];
           for(int i=1;i<intervals.size();i++)
           {
               if(intervals[i][0]<arrow[1])
               {
                   ans++;
                   continue;
               }
               else
               arrow=intervals[i];
           }
        return ans;
    }
};
//[1,11] [2,12] [11,22] [1,100]