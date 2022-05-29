// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
   
    // void setBit(unsigned N)
    // {
    //     if(N>1)
    //       setBits(N/2);
           
    //     if(N%2==1) ans++;
    // }
    int setBits(int N) 
    {
        int ans=0;
        while(N!=0)
        {
            if(N&1) ans++;
            N=N>>1;
        }
        return ans;
    } 
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  // } Driver Code Ends