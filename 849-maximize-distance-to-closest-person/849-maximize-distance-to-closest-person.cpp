class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
       int n=seats.size();
       vector<int> left(n),right(n);
       int filled=-1;
       int ans=0;
       for(int i=0;i<n;i++)
       {
           if(seats[i])
               filled=i;
           left[i]=filled;
       }
       filled=-1;
       for(int i=n-1;i>=0;i--)
       {
           if(seats[i])
               filled=i;
           right[i]=filled;
       }
       for(int i=0;i<seats.size();i++)
       {
           if(seats[i]!=1)
           {
              if(left[i]==-1)
                  ans=max(ans,right[i]);
              else if(right[i]==-1)
                  ans=max(ans,n-left[i]-1);
              else
               ans=max(ans,(right[i]-left[i])/2);   
           }
       }
       return ans;
    }
};