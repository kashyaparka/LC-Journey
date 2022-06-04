// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) 
    {
        int ans=-1;
        int c=0;
        for(int i=31;i>=0;i--)
        {
            if( ( N & (1<<i) )!=0)
            {
                c++;
                ans=i+1;
            }
        }
        return c==1?ans:-1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends