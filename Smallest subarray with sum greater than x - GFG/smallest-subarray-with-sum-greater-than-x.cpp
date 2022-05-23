// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
    //     int l=0,r=0;
    //     int left_len=0;
    //     int right_len=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         if(l>x) break;
    //         if(r>x) break;
    //         l+=arr[i];
    //         left_len++;
    //         right_len++;
    //         r+=arr[n-i-1];
    //     }
    //     for(int i=0;i<left_len;i++)
    //     {
    //         if(x<l-arr[i]);
    //         {
    //             l-=arr[i];
    //             left_len--;
    //         }
    //     }
    //     return left_len;
    // 
       int i=0;
       int ans =INT_MAX;
       int j=0;
       int sum =0;
       while(j<n){
           sum+=arr[j];
           while(sum>x){
               ans = min(ans,j-i+1);
               sum-=arr[i];
               i++;
           }
           j++;
       }
       
       
       return ans;
    }
};


// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends