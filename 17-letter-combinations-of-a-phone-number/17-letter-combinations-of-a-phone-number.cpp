class Solution {
public:
    // unordered_map<int,string> map;
    vector<string> backtrack(string &d, int i,map<int,string> &m)
    {
            vector<string> ans;
       if(i==d.size())
       {
           return {""};
       }
        
       vector<string> temp=backtrack(d,i+1,m);
       for(auto a : m[d[i]-'0'])
       {
           for(auto x:temp)
           {
               ans.push_back(a+x);
           }
       }
        return ans;
    }
    vector<string> letterCombinations(string digits) 
    {
         map<int,string> m  { {2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},{6,"mno"},{7,"pqrs"},                                   {8,"tuv"}, {9,"wxyz"} };            
        if(digits.size()==0)
            return {};
         return backtrack(digits,0,m);
    }
};