class Solution {
public:
    int longestPalindrome(string s) 
    {
       unordered_map<int,int> map;
       // for(int i=0;i<s.size();i++)
       //     map[s[i]]++;
       int ans=0;
       for(int i=0;i<s.size();i++)
       {
           map[s[i]]++;
           if(map[s[i]]%2==0)
           {
             ans += map[s[i]];
             map[s[i]]=0;
           }
       }
       if(ans%2==0)
       {
           for(auto it : map)
               if(it.second==1)
               {
                   ans++;
                   break;
               }
       }
       return ans; 
        
    }
};