class Solution {
public:
    int numberOfBits(int n)
    {
        int c=0;
        while(n!=0)
        {
            if(n&1) c++;
            n=n>>1;
        }
        if(n&1) c++;
        return c;
    }
    vector<int> countBits(int n) 
    {
      vector<int> v;
      for(int i=0;i<=n;i++)
      {
          int k=numberOfBits(i);
          v.push_back(k);
      }
      return v;
    }
};