
void marker(int **arr, int n, int m, int i, int j, bool **visited){
    if(i < 0 or j < 0 or i >= m or j >= n or visited[i][j] == 1 or arr[i][j] == 0){

        return ;

    }else{
        visited[i][j] = true;
        arr[i][j] = 0;
        marker(arr, n, m, i + 1, j + 1, visited);
        marker(arr, n, m, i - 1, j - 1, visited);
        marker(arr, n, m, i + 1, j - 1, visited);
        marker(arr, n, m, i - 1, j + 1, visited);
        marker(arr, n, m, i + 1, j, visited);
        marker(arr, n, m, i, j + 1, visited);
        marker(arr, n, m, i - 1, j, visited);
        marker(arr, n, m, i, j - 1, visited);
    }
}
int getTotalIslands(int** arr, int n, int m){
    bool **visited = new bool*[n];
    for(int i = 0; i < n; i++)
        visited[i] = new bool [m]();
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++ ){
            if(arr[i][j] == 1){
                marker(arr, m, n, i, j, visited);
                count++;
            }
        }
    }
    return count;
}
