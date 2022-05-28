class Solution {
//             vector<vector<int>> permutations;
// public:
//         Solution() : m_a( 0 ){}
//     void operator = ( int a ) { m_a = a; }

// private:
//     friend bool operator<( const Solution& lhs, const Solution& rhs ) { return lhs.m_a < rhs.m_a; }
//     int m_a;
// public:
//     //  void permute(vector<int> &a, int l, int r,vector<vector<int>> &permutations) 
//     //  { 
//     //      if (l == r) 
//     //         permutations.push_back(a);
//     //      else
//     //      { 
//     //         for (int i = l; i <= r; i++) 
//     //         { 
//     //             // Swapping done 
//     //             swap(a[l], a[i]); 
//     //             // Recursion called 
//     //             permute(a, l+1, r,permutations); 
//     //             //backtrack 
//     //             swap(a[l], a[i]); 
//     //         } 
//     //      } 
//     // }
//     void findPermutations(vector<int>&a, int n)
//     {
  
//     // Sort the given array
//     sort(a.begin(),a.end());
//     do {
//         permutations.push_back(a);
//     } while (next_permutation(a.begin(),a.end()));
//     }
//     void nextPermutation(vector<int>& nums) 
//     {
//         findPermutations(nums,nums.size());
//         int num=0;
//         vector<int> v;
//         for(int i=0;i<nums.size();i++)
//         {
//             num+=nums[i];
//             num*=10;
//         }
//         num/=10;
//         for(int i=0;i<permutations.size();i++)
//         {
//             int k=0;
//             for(int j=0;j<permutations[0].size();j++)
//             {
//                // cout<<permutations[i][j]<<endl;
//                 k+=permutations[i][j];
//                 k*=10;
//             }
//             k/=10;
//             v.push_back(k);
//         }
//         sort(v.begin(),v.end());
//         int m=0;
//         for(int i=0;i<v.size();i++)
//         {  
//             if(num==v[i])
//             {   
//                 while(num>0)
//                 nums[m++]+=num%10;
//                 num/=10;
//             }
//         }
//     }
    public:
    void nextPermutation(vector<int>& nums) 
    {
        next_permutation(nums.begin(),nums.end());
          
          // do {
          //   std::cout << nums[0] << nums[1] <<nums[2] << '\n';
          // } while ( std::next_permutation(nums.begin(),nums.end()) );
    }
};