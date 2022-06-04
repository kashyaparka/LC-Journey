// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) 
    {
        unordered_map<char,int> umap;
        umap['I']=1;
        umap['V']=5;
        umap['X']=10;
        umap['L']=50;
        umap['C']=100;
        umap['D']=500;
        umap['M']=1000;
        int sum=0;
        // CMXVI
        // VI
        
        // IX
        for(int i=0;i<str.size();i++)
        {
            if(i+1<str.size() && umap[str[i]]<umap[str[i+1]] )
            {
                sum-=umap[str[i]];
            }
            else  sum+=umap[str[i]];
        }
        return sum;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends