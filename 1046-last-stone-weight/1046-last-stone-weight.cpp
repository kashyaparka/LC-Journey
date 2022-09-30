class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(int i=0;i<stones.size();i++){
            q.push(stones[i]);
        }
        if(q.size()==1) return q.top();
        while(q.size())
        {
            int t=q.top();
            q.pop();
            int x=t-q.top();
            q.pop();
            if(x!=0) q.push(x);
            if(q.size()==1) return q.top();
        }
        return q.size()!=0?q.top():0;
    }
};