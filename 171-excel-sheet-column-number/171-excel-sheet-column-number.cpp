class Solution {
public:
    int titleToNumber(string ct) 
    { 
      int ans=0;
      for(auto i : ct)
      {
          int d=i-'A'+1;
          ans=ans*26+d;
      }
      return ans;
    }
};