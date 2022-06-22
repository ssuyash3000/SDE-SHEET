bool isSafe(vector<vector<bool>> &board, int i, int j){
    int n = board.size();
    for(int start = i-1; start >= 0; start--){
        if(board[start][j] == true)
            return false;
    }
    for(int start1 = i-1,  start2 = j-1; start1 >= 0 and start2>=0; start1--, start2--){
        if(board[start1][start2] == true)
            return false;
    }
    for(int start1 = i-1,  start2 = j+1; start1 >= 0 and start2 < n; start1--, start2++){
        if(board[start1][start2] == true)
            return false;
    }
    return true;
}
void rowTraverse(vector<vector<bool>> &board, int row,  int n, vector<vector<int>> &ans, int k = 0){
    if(n == k){
        vector<int> v;

        for(auto i : board){
            for(auto j : i){
                v.push_back(j);
            }
        }
        ans.push_back(v);
        return;
    }
    if(row >= n) return;


    for(int j = 0; j < n; j++)
    {
        if(isSafe(board, row, j)){
            board[row][j] = true;
            rowTraverse(board, row + 1, n, ans, k+1);
            board[row][j] = false;
        }
    }
}


vector<vector<int>> solveNQueens(int n) {
    vector<vector<int>> ans;
    vector<vector<bool>> board(n, vector<bool>(n, false));
    for(int i = 0; i < n; i++){
        rowTraverse(board, i, n, ans);
    }
    return ans;

}
