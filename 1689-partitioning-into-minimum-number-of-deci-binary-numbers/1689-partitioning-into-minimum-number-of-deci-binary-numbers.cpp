class Solution {
public:
    int minPartitions(string n) {
        int mx=INT_MIN;
        int i=n.size()-1;
        while( i>=0 && n.size()>=0)
        {
             int t=(int)(n[i]-'0');
             mx=max(mx,t%10);
             i--;
             n.pop_back();
        }
        return mx;
    }
};