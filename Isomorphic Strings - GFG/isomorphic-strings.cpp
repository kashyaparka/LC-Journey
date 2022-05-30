// { Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        if(str1.size()!=str2.size()) return false;
        unordered_map<char,int> umap;
        unordered_map<char,int> mp2;
        char ch='a';
        char c='a';
        for(int i=0;i<str1.size();i++)
        {
            char a,b;
            if(umap[str1[i]]==0)
            {
              umap[str1[i]]=ch;
              a=ch;
              ch++;
            }
            else 
            {
                a=umap[str1[i]];
            }
            if(mp2[str2[i]]==0)
            {
              mp2[str2[i]]=c;
              b=c;
              c++;   
            }
            else
              b=mp2[str2[i]];
            if(a!=b) return false;
        }
        return true;
        
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends