class Solution {
public:
    void sortColors(vector<int>& a) {
        // int m=0,l=0,h=nums.size()-1;
        // while(m<=h){
        // switch(nums[m])
        // {
        //     case 0 : 
        //         swap(nums[l],nums[m]);
        //         l++;
        //         m++;
        //         break;
        //     case 1 : 
        //         m++;
        //         break;
        //     case 2 :
        //         swap(nums[m],nums[h]);
        //         h--;
        // }
        // }
        int n=a.size();
        int one=0,two=0,zero=0;
        for(int i=0;i<n;i++)
        {
           if(a[i]==0) 
           {
               swap(a[i],a[zero++]);
               one=zero;
           }
        }
        for(int i=0;i<n;i++)
        {
           if(a[i]==1) 
           {
               swap(a[i],a[one++]);
               two=one;
           }
           //while(a[i]!=1 && one<n-1) one++;
        }
    }
};


//     void sortColors(vector<int>& nums){
//       int i=0,j=nums.size()-1;
//       for(int i=0;i<nums.size();i++){
//         if(nums[i]==0)
//       }  
        
//     }
//};