// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


        bool cmp(pair<string, int>& a,
                 pair<string, int>& b)
        {
            return a.second < b.second;
        }
class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        // unordered_map<string,int> mp;
        // for(int i=0;i<n;i++)
        // {
        //       mp[arr[i]]++;
        // }
        // vector<pair<string,int>> v;
        // for(auto &it:mp) v.push_back(it);
        // sort(v.begin(),v.end(),cmp);
        // return n>1?v[1].first:"";
    unordered_map<string,int> m;
       for(int i = 0 ; i < n ; i++){
           m[arr[i]]++;
       }
       
       string ans = "";
       int mini = 0;
       string help = "";
       for(auto i : m){
           if(i.second > mini){
               mini = i.second;
               help = i.first;
           }
       }
       m[help] = 0;
       mini = 0;
       for(auto i : m){
           if(i.second > mini){
               mini = i.second;
               ans = i.first;
           }
       }
       return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends