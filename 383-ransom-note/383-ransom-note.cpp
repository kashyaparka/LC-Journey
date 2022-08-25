class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<int,int> map1;
        for(auto i:magazine)
            map1[i]++;
        for(auto i:ransomNote)
        {
            if(map1[i]==0) return false;
            map1[i]--;
        }
        return true;
    }
};