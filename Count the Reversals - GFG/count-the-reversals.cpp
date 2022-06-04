// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    // your code here
    if(s.size()&1!=0)
       return -1;
    stack<char> st;
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='{')
           st.push('{');
        else
        {
            if(st.empty())
            {
                ans++;
                st.push('{');
            }
            else 
               st.pop();
        }
    }
    return st.size()/2+ans; 
}