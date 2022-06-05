// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    int countFriendsPairings(int n) 
    {  
               long long int dp[10001];
       dp[0]=0;
       dp[1]=1;
       dp[2]=2;
       int mod=1e9+7;
       for(int i=3; i<n+1; i++)
       {
           dp[i]=((dp[i-1]%mod) + ( ((dp[i-2])%mod) * ((i-1)%mod) )%mod)%mod;
       }
       
       return dp[n];
    }
};    
 

// { Driver Code Starts.
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 
  // } Driver Code Ends