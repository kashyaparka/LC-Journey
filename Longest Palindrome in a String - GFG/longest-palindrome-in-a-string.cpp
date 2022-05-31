// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution {
   private:
   string printstring(string& S,int start,int end ){
       string result="";
       for(int i=start;i<=end;i++){
           result=result+S[i];
       }
       return result;
   }
   public:
   string longestPalin (string s) {
       // code here
    int l,h;
    int start=0,end=1;
    for(int i=1;i<s.length();i++){
        //even string
        l=i-1;
        h=i;
        while(l>=0 && h<s.length() && s[l]==s[h]){
            if(h-l+1>end){
                start=l;
                end=h-l+1;
            }
            l--;
            h++;
        }
        //odd string
        l=i-1;
        h=i+1;
        while(l>=0 && h<s.length() && s[l]==s[h]){
            if(h-l+1>end){
                start=l;
                end=h-l+1;
            }
            l--;
            h++;
        }
    }
    return printstring(s,start,start+end-1);
   }
};
// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends