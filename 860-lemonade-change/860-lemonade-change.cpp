class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        //I HAVE READ THE QUESTION WRONG , THIS LOGIC WON'T WORK
        // if(bills[0]!=5)
        //     return false;
        // int change=0;
        // for(int i=0;i<bills.size();i++)
        // {
        //     if(bills[i]==5)
        //     {
        //         change+=5;
        //         continue;
        //     }
        //     change-=5;
        //     if(change<=0)
        //         return false;
        //     change=change+bills[i];
        // }
        // return true;
        unordered_map<int,int> map;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            {
                map[bills[i]]++;
            }
            else if(bills[i]==10)
            {
                if(map[5]==0)
                         return false;
                map[5]--;
                map[bills[i]]++;
            }
            else
            {
                if(map[10]>=1 && map[5]>=1)
                {
                    map[5]--;
                    map[10]--;
                    map[bills[i]]++;
                }
                else if(map[10]==0 && map[5]>=3)
                {
                    map[5]--;
                    map[5]--;
                    map[5]--;

                }
                else 
                        return false;
            }
        }
        return true;
    }
};