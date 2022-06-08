class Solution {
public:
    int firstMissingPositive(vector<int> nums) {
       set<int> s(nums.begin(),nums.end());
       priority_queue<int,vector<int>,greater<int>> p(s.begin(),s.end());
       while(p.top()<=0)
       {
           p.pop();
           if(p.empty()) return 1;
       }
       int k=1;
       while(!p.empty())
       {
           if(p.top()==k)
           {
               p.pop();
               k++;
           }
           else break;
       }
       return k;
    
    }
};