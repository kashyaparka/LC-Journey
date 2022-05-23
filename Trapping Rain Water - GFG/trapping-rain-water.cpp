// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n)
    {
       vector<int> left_array(n,0);
       vector<int> right_array(n,0);
       vector<int> res_array(n,0);
       int mx=0;
       left_array[0]=arr[0];
       right_array[n-1]=arr[n-1];
       for(int i=1;i<n;i++)
       {
           left_array[i]=max(left_array[i-1],arr[i]);
       }
       mx=0;
       for(int i=n-2;i>=0;i--)
       {
           right_array[i]=max(right_array[i+1],arr[i]);
       }
       long long int t=0;
       for(int i=0;i<n;i++)
       {
           t+=min(left_array[i],right_array[i])-arr[i];
       }
       return t;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends