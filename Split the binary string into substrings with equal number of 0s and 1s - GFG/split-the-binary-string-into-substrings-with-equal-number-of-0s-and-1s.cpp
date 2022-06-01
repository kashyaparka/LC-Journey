// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str)
    {
        int count=0;
        int one=0,zero=0;
        for(int i=0;i<str.size();i++)
        {
            if(one==zero)
            {
                count++;
                one=0;
                zero=0;
            }
            if(str[i]=='0') zero++;
            if(str[i]=='1') one++;
        }
        if(one!=zero) return -1;
        return count;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends