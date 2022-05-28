// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	    void permute(string s,int l,int r,vector<string>&v)
	    {
	        if(l==r)
	        {
	            v.push_back(s);
	        }
	        for(int i=l;i<=r;i++)
	        {
	            swap(s[l],s[i]);
	            permute(s,l+1,r,v);
	            swap(s[l],s[i]);
	        }
	    }
		vector<string>find_permutation(string s)
		{
		    vector<string> v;
		    int n=s.size();
		    permute(s,0,n-1,v);
		    sort(v.begin(),v.end());
		    for(int i=1;i<v.size();i++)
		    {
		        if(v[i-1]==v[i])
		           v.erase(v.begin()+i);
		    }		    
		    return v;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends