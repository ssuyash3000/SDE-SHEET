void DFS(vector<vector<bool>> &graph, int V, int s,vector<int> &res, vector<bool> &visited){
//     if(visited[s] == true)
//         return;
    res.push_back(s);
    visited[s] = true;
    for(int i = 0; i < V; i++){
        if(graph[s][i] == true and visited[i] == false){
            DFS(graph, V, i, res, visited);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    vector<vector<bool>> graph(V, vector<bool>(V, 0));
    for(int i = 0; i < E; i++){
        int u = edges[i][0]; 
        int v = edges[i][1];
        graph[v][u] = graph[u][v] = true;
    }
    vector<vector<int>> ans;
    vector<bool> visited(V, false);
    for(int i = 0; i < V; i++){
        if(visited[i] == false){
            vector<int> res;
            DFS(graph, V, i, res, visited);
            ans.push_back(res);
        }
    }
    return ans;
}
