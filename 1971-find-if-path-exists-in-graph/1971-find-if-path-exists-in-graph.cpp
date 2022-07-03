class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        vector<vector<int>> graph(n);
        for(int i=0;i<edges.size();i++)
        {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int> q;
        q.push(source);
        vector<int> visited(n,0);
        visited[source]=1;
        while(!q.empty())
        {
            int a=q.front();
            q.pop();
            if(a==destination) return true;
            
            for(int i=0;i<graph[a].size();i++)
            {
                if(visited[graph[a][i]]==0)
                {
                    q.push(graph[a][i]);
                    visited[graph[a][i]]=1;
                }
            }
            
        }
        return false;
    }
};