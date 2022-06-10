void helper(vector<vector<int>> &image, vector<vector<bool>> &visited,int m, int n, int x, int y, int newC, int oldC){
    
    if(x < 0 or y < 0 or m <= x or n <= y or visited[x][y] == true or image[x][y] != oldC)
        return;
    else{
        image[x][y] = newC;
        visited[x][y] = true;
        helper(image, visited, m, n, x + 1, y, newC, oldC);
        helper(image, visited, m, n, x - 1, y, newC, oldC);
        helper(image, visited, m, n, x, y - 1, newC, oldC);
        helper(image, visited, m, n, x, y + 1, newC, oldC);
    }
    
    
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    // Write your code here.
    int m = image.size();
    int n = image[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    int oldC = image[x][y];
    helper(image, visited, m, n, x, y, newColor, oldC);
    return image;
    
}
