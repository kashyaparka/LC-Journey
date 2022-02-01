class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int buy=INT_MAX;
     int bada=0;
     for(int i=0;i<prices.size();i++){
         if(prices[i]<buy)
         {
             buy=prices[i];
             // bada=prices[i]-t;
             // t=prices[i];
         }
         else if(prices[i]-buy>bada){
             bada = prices[i]-buy;
             // t = min(t,prices[i]);
         }
     } 
     return bada; 
    }
};