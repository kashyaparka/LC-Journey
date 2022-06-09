#include <list>
vector<int> Solution::slidingMaximum(const vector<int> &A, int k) 
{
      list<int> l;
      int j=0,i=0;
      vector<int> ans;
      int n=A.size();
      while(j<n)  
      {
          if(l.empty())
          {
              l.push_back(A[j]);
          }
          else
          {
              while(!l.empty() && l.back()<A[j])
                 l.pop_back();
              l.push_back(A[j]);
          }
          if(j-i+1<k)
             j++;
          else if(j-i+1==k)
          {
              ans.push_back(l.front());
              if(A[i]==l.front())
                 l.pop_front();
               i++;
               j++;
          }
      }
      return ans;
}
