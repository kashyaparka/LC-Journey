class Solution {
public:
    vector<string> findWords(vector<string>& w) 
    {
        //15min
        unordered_map<char,int> map1,map2,map3;
        string s1="qwertyuiop";
        string s2="asdfghjkl";
        string s3="zxcvbnm";
        map1.clear();
        map2.clear();
        map3.clear();
        for(auto i:s1)
            map1[i]++;
        for(auto i:s2)
            map2[i]++;
        for(auto i:s3)
            map3[i]++;
        vector<string> ans;
        for(auto i:w)
        {
            bool one=true,two=true,three=true;
            for(int j=0;j<i.size();j++)
            {
                if(map1.find(tolower(i[j]))==map1.end())
                    one=false;
                if(map2.find(tolower(i[j]))==map2.end())
                    two=false;
                if(map3.find(tolower(i[j]))==map3.end())
                    three=false;
            }
            if(one || two || three) ans.push_back(i);
        }
        return ans;
        
        //the above solution is not getiing acceptes
    }
};