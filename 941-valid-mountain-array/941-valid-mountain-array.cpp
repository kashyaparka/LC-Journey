class Solution {
public:
    bool validMountainArray(vector<int>& arr) 
    {
         int c=0;
         if(arr.size()==1 || arr.size()==0) return false;
         for(int i=1;i<arr.size();i++)
         {
             if(arr[0]>=arr[1])
                 return false;
             if(arr[i-1]==arr[i])
                 return false;
             if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
                 c=i;
         }
        // cout<<c<<" ";
         for(int i=c+1;i<arr.size();i++)
         {
            if(arr[i-1]<arr[i]) return false;
         }
         for(int i=1;i<c;i++)
         {
            if(arr[i-1]>arr[i]) return false;
         }
         if(c==0 || c==arr.size()-1) return false;
         return true;
    }
};