// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int one=0,two=0,zero=0;
        for(int i=0;i<n;i++)
        {
           if(a[i]==0) 
           {
               swap(a[i],a[zero++]);
               one=zero;
           }
        }
        for(int i=0;i<n;i++)
        {
           if(a[i]==1) 
           {
               swap(a[i],a[one++]);
               two=one;
           }
           //while(a[i]!=1 && one<n-1) one++;
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends