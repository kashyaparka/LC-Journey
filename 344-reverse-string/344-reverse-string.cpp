class Solution {
public:
    void reverseString(vector<char>& s) {
  
   // reverse(s,0);
    int l=0,r=s.size()-1;
    while(l<r)
    {
       swap(s[l],s[r]);
       l++;r--;
    }
    }
    
//     void reverse(vector<char>& s,int b){
//     int a=s.size();
//     if(b==a/2)
//          return;
    
//     swap(s[b],s[s.size()-1-b]);
//     reverse(s,b+1);
//     }
};