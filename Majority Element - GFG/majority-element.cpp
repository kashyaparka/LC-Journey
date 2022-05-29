// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
int c=0;
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // sort(a,a+size);
        // int ans=-1;
        // int res;
        // for(int i=1;i<size;i++)
        // {
        //     if(a[i-1]==a[i])
        //     {
        //         c++;
        //     }
        //     if(c>size/2) return a[i];
        //     if(ans<c)
        //     {
        //         ans=max(ans,c);
        //         res=a[i];
        //     }
        // }
        // your code here
        map <int,int> mp;
        for(int i=0; i<size; i++){
            mp[a[i]]++;
        }
        for(int i=0; i<size; i++){
            if(mp[a[i]]>size/2){
                return a[i];
            }
        }
        return -1;
        //return ans>size/2?res:-1;
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends