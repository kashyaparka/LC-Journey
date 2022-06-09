// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	   vector<int> v(26,0);
	   vector<int> v1(26,0);
	   int ans=0;
	   int n=txt.size();
	   int k=pat.size();
	   for(int i=0;i<k;i++)
	   {
	       v[pat[i]-'a']++;
	   }
	   int j=0,i=0;
	   while(j<n)
	   {
           if(j-i+1<k)
           {
               v1[txt[j]-'a']++;
               j++;
           }
           else if(j-i+1==k)
           {
                v1[txt[j]-'a']++;
               if(v==v1){
                  ans++;
               }
              // if(v1[txt[i]-'a']!=0)
                        v1[txt[i]-'a']--;
              i++;
              j++;
           }
       }
   return ans;
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	   //Time Complexity: O(n*n)+0(nlogn)+0(n)   
	   //TLE
// 	   int n=pat.size();
// 	    string s=pat;
// 	   map<int,string> m;
// 	   for(int i=0;i<txt.size();i++)
// 	   {
// 	       string t=txt.substr(i,n);
// 	     //  cout<<t<<" ";
// 	       sort(t.begin(),t.end());
// 	       m[i]=t;
// 	   }
	  
// 	   sort(s.begin(),s.end());
// 	   int c=0;
// 	  // cout<<txt;
// 	   for(auto it : m)
// 	   {
// 	       if(s==it.second)
// 	           c++;
// 	      // cout<<s<<"->"<<it.second<<" ";
// 	   }
// 	   return c;

	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends