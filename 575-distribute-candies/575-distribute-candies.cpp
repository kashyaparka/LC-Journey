class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        int n=candyType.size();
        int cnt=0;
        for(int i=0;i<candyType.size();i++)
        {
            if(s.find(candyType[i])==s.end())
            {
                s.insert(candyType[i]);
                if(cnt<n/2)
                    cnt++;
                else break;
            }
        }
        return cnt;
    }
};