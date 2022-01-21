class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
       int fuel=0;
        int total=0;
        int res=0;
       for(int i=0;i<gas.size();i++)
       {
           fuel+=gas[i]-cost[i];
           if(fuel<0)
           {
                total+=fuel;
                fuel=0;
               res=i+1;
           }
       }
        total+=fuel;
        return total<0?-1:res;
    }
};