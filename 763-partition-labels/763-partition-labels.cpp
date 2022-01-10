class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> out;
        vector<int> last(26,-1);
        for(int i=s.size()-1;i>=0;i--)
        {
            if(last[s[i]-'a']==-1)
                last[s[i]-'a']=i;
        }
        
        int lastpos=0;
        int minp=-1;
        int plen=0;
        for(int i=0;i<s.size();++i)
      {
            int lp=last[s[i]-'a'];
            minp=max(minp,lp);
            ++plen;
            if(i==minp)
            {
                out.push_back(plen);
                minp=-1;
                plen=0;
            }
        }
        return out;
    }
};