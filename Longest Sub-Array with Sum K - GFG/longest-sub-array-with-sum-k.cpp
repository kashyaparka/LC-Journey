// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
// 	int i = 0, j = 0, sum = 0;
// 	int mx = INT_MIN;
// 	while (j < n) {
// 		sum += A[j];
// 		if (sum < k) {
// 			j++;
// 		} else if (sum == k) {
// 			mx = max(mx, j - i + 1);
// 			j++;
// 		} else if (sum > k) {
// 			while (sum > k) {
// 				sum = sum - A[i];
// 				i++;
// 			}
// 			j++;
// 		}
// 	}
// 	return mx
unordered_map<int,int> m ;
        int sum=0 ;
        int length=0 ;
        for(int i=0 ; i<N ; i++)
        {
            sum+=A[i] ;
            if(sum==K) length=i+1 ;
            if(m[sum]==0) m[sum]=i+1 ;
            if(m[sum-K]>0) length=max(length,i-m[sum-K]+1) ;
        }
        
        return length ;
    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends