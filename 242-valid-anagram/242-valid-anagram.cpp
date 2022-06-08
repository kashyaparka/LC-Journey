class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.size()!=t.size())
        //     return false;
        // unordered_map<char,int> map;
        // for(auto i:s){
        //     map[i]++;
        // }
        // for(auto i:t){
        //     if(map[i]==0)
        //       return false;
        //    map[i]--; 
        // }
        // return true;
        
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
        
    }
};