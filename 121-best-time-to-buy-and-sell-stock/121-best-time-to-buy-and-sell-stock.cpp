class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
//        int sum=0;
//        int mx=0;
//        for(int i=0;i<prices.size();i++)
//        {
//            for(int j=i+1;j<prices.size();j++)
//            {
//                sum=0;
//                if(prices[i]<prices[j])
//                     sum+=abs(prices[j]-prices[i]);
//                mx=max(sum,mx);
//            }
//        }
//        return mx;
        
       stack<int> s;
       int mx=0;
       s.push(prices[0]);
       for(int i=0;i<prices.size();i++)
       {
          if(s.top()>prices[i])
          {
              s.pop();
              s.push(prices[i]);
          }
          int sum=prices[i]-s.top();
          mx=max(mx,sum);
       }
       return mx;
    }
};