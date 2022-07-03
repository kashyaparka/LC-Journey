class Solution {
public:
    int findCenter(vector<vector<int>>& edges) 
    {
        if(edges[0][1]==edges[1][0] || edges[0][1]==edges[1][1])
            return edges[0][1];
        return edges[0][0];
       // vector<vector<int>> graph(edges.size());
       // for(int i=0;i<edges.size();i++)
       // {
       //     graph[edges[i][0]].push_back(edges[i][1]);
       //     graph[edges[i][1]].push_back(edges[i][0]);
       // }
       // vector<int> visited(edges.size(),0);
       // queue<int> q;
       // q.push(graph[0][0]);
       // while(!q.empty())
       // {
       //     int a=q.front();
       //     q.pop();
       //     for(int i=0;i<graph[a].size();i++)
       //     {
       //         if(visited[graph[a][i]]==0)
       //         {
       //             q.push(graph[a][i]);
       //             visited[graph[a][i]]++;
       //         }
       //     }
       // }
       // for(int i=0;i<visited.size();i++)
       // {
       //     if(visited[i]==edges.size()-1)
       //         return visited[i];
       // }
       // return -1;
    }
};