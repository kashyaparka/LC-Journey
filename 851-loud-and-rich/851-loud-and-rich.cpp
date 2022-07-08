class Solution {
public:
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        deque<int> q;
        const int N=quiet.size();
        vector<int> indegree(N,0);
        vector<vector<int>> graph(N);
        for(auto &it : richer){
            ++indegree[it[1]];
            graph[it[0]].push_back(it[1]);
        }
        for(int i=0;i<N;i++){
            if(indegree[i]==0)
                q.push_back(i);
        }
        vector<int> answer(N);
        iota(answer.begin(),answer.end(),0);
        while(!q.empty()){
            int node=q.front();
            q.pop_front();
            for(auto it : graph[node]){
                if(quiet[answer[it]]>quiet[answer[node]])
                    answer[it]=answer[node];
                if(--indegree[it]==0)
                    q.push_back(it);
            }
        }
        return answer;
    }
};