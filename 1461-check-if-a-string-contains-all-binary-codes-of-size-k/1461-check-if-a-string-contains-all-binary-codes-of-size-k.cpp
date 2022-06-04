class Solution {
public:
    string intsebinary(int k)
    {
        string ks="";
        while(k!=0)
        {
            if(k&1) ks+='1';
            else ks+='0';
            k=k>>1;
        }
        return ks;
    }
    bool hasAllCodes(string s, int k) 
    {
       if (k > s.size()) return false;
        
        unordered_set<string> my_set;
        
        for (int i = 0; i <= s.size()-k; i++)
            my_set.insert(s.substr(i, k));
        
        return my_set.size() == pow(2, k);
    }
};