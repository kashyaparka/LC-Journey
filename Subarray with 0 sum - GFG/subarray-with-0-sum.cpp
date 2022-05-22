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
        //-3 2 1 4 6
        //-4 -2 1 4 5
        // sort(arr,arr+n);
        // int i=0;
        // int j=n;
        // while(i<j)
        // {
        //     int sum = accumulate(arr+i,arr+j,0);
        //     if(sum==0) return true;
        //     if(sum<0) i++;
        //     else j--;
        // }
        // return false;
           int sum=0;
       unordered_set<int>s;
       for(int i=0;i<n;i++){
           sum+=arr[i];
           if(sum==0){
               return true;
           }
           if(s.find(sum)!=s.end()){
               return true;  // if found, return true;
           }else{  
           s.insert(sum); // if sum not found in hash, insert
           }
       }
       return false;
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