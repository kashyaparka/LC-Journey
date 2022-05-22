class Solution {
public:
    int calPoints(vector<string>& ops)
    {
        vector<int> res;
        for(string ch:ops)
        {
            if(ch=="C") res.pop_back();
            else if(ch=="D") res.push_back(res.back()*2);
            else if(ch=="+") res.push_back(res.back()+res[res.size()-2]);
            else{ 
                res.push_back(stoi(ch));
            }
        }
        int sum = accumulate(res.begin(),res.end(),0);
        return sum;
    }
};