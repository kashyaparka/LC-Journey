class Solution {
public:
    int waysToMakeFair(vector<int>& nums) 
    {
       int n=nums.size();
       vector<int> even(n);
       vector<int> odd(n);
       int i=0;
       int t=0;
       for(int i=0;i<nums.size();i++)
       {
           if(i%2==0) t+=nums[i];
           even[i]=t;
       }
       t=0;
       for(int i=0;i<nums.size();i++)
       {
           if(i%2!=0) t+=nums[i];
           odd[i]=t;
       }
       int ans=0;
       int evensum,oddsum;
       for(int i=0;i<nums.size();i++)
       {
           // 1 2 3 4 5 6 7 8 9
           // 1 2 3 5 6 7 8 9
           evensum=0;
           oddsum=0;
           if(i%2==0)
           {
               evensum=even[i];
               evensum-=nums[i];
               evensum+=odd[n-1];
               evensum-=odd[i];
               
               oddsum=odd[i];
               oddsum+=even[n-1];
               oddsum-=even[i];
               if(oddsum==evensum) ans++;
           }
           else 
           {
               evensum=even[i];
               evensum+=odd[n-1];
               evensum-=odd[i];
               
               oddsum=odd[i];
               oddsum-=nums[i];
               oddsum+=even[n-1];
               oddsum-=even[i];
               if(oddsum==evensum) ans++;
           }           
       }
       return ans;
    }
};