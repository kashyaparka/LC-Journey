// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    sort(arr,arr+n);
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	      
	        int k=sum-arr[i];
	        int l=i+1,h=n-1;
	        while(l<h)
	        {
	           
	           if( (arr[l]+arr[h]) >= k)
	           {
	               h--;
	           }
	           else
	           {
	               l++;
	               c+=h-l+1;
	           }
	        }
	    }
	    return c;
	}
};

// { Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends