// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
       // 18
        //-21 21 30 -7 45 49 -26 38 4 36 19 -18 19 -40 23 -20 -17 13
        unordered_map<int,int> umap;
        int sum=arr[0];
        umap[sum]=1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==0 || sum==0) return true;
            sum+=arr[i];
            if(umap[sum]!=0) return true;
            
            umap[sum]=1;
        }
        return sum==0?true:false;
    }
};

// { Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}  // } Driver Code Ends