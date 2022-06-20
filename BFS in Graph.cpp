#include <queue>

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    vector<vector<bool>>graph(vertex, vector<bool>(vertex, false));
    for(int i = 0; i < edges.size(); i++){
        int a = edges[i].first;
        int b = edges[i].second;
        graph[a][b] = true;
        graph[b][a] = true;
    }
    vector<int> ans;
    vector<bool> vis(vertex, false);
    for(int i = 0; i < vertex; i++)
    {
        if(vis[i] == false){
            
            queue<int> q;
            q.push(i);
            
            while(q.size() != 0){
                int curr = q.front();
                vis[curr] = true;
                q.pop(); ans.push_back(curr);
                for(int j = 0; j < vertex; j++){
                    if(vis[j] == false and graph[curr][j] == true){
                        q.push(j);
                        vis[j] = true;
                    }
                }
            }
            
        }
    }
    return ans;
    
}
