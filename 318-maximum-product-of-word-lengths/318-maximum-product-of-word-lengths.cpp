    bool cmp(string a, string b)
    {
        return (a.size() > b.size() );
    }
class Solution {
public:
    bool commonLetters(string a,string b)
    {
        unordered_map<char,int> m1;
        for(int i=0;i<a.size();i++)
            m1[a[i]]++;
        for(int j=0;j<b.size();j++)
        {
            if(m1[b[j]]!=0) return false;
        }
        return true;
    }
       
  
    int maxProduct(vector<string>& words) 
    {
        // BIT MANIPULATION
      int ans = 0;
        if(words.size() < 2)
            return ans;
        int n = words.size();
        vector<int> val(n);
        for(int i = 0; i < n; ++ i){
            for(int j = 0; j < words[i].size(); ++ j){
                int k = words[i][j] - 'a';
                val[i] |= (1<<k);
            }
        }
        for(int i = 0; i < n - 1; ++ i){
            for(int j = i + 1; j < n; ++ j){
                if((val[i]&val[j]) == 0){
                    ans = max(ans, (int)((int)words[i].size()*(int)words[j].size()));
                }
            }
        }
        return ans;
        
        //TLE SOLUTION
        //sort(words.begin(),words.end(),cmp);
//         int mx=0;
//          for(int i=0;i<words.size();i++)
//         {
//             for(int j=i+1;j<words.size();j++)
//             {
//                 if(commonLetters(words[i],words[j]))
//                 {
//                     int k=words[i].size()*words[j].size();
//                     mx=max(mx,f(words[i],words[j]));
//                 }
//             }
//         }
//         return mx;
        
        //TLE SOLUTION
        // if(words.size()<=1) return 0;
        // vector<int> v;
        // int mx=0;
        // for(int i=0;i<words.size();i++)
        // {
        //     for(int j=i+1;j<words.size();j++)
        //     {
        //         if(commonLetters(words[i],words[j]))
        //         {
        //             int k=words[i].size()*words[j].size();
        //             mx=max(mx,k);
        //         }
        //     }
        // }
        // return mx;
        
        
    }
};