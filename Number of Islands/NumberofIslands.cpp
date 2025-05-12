#include <bits/stdc++.h>

using namespace std;

bool isSafe(vector<vector<char>>& grid, int x, int y, vector<vector<bool>>& visited) {
    int rows = grid.size();
    int cols = grid[0].size();
    return (x >= 0) && (y >= 0) && (x < rows) 
    && (y < cols) && (!visited[x][y] && grid[x][y] == '1');
}

void dfs(vector<vector<char>>& grid, int x, int y, vector<vector<bool>>& visited) {
    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};

    visited[x][y] = true;

    for(int i = 0; i < 4; ++i) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        if(isSafe(grid, newX, newY, visited)) {
            dfs(grid, newX, newY, visited);
        }
    }
}

int numIslands(vector<vector<char>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();

    int count = 0;
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));

    for(int row = 0; row < rows; row++) {
        for(int col = 0; col < cols; col++) {
            if(grid[row][col] == '1' && !visited[row][col]) {
                dfs(grid, row, col, visited);

                count++;
            }
        }
    }

    return count;
}

int main() {
    vector<vector<char>> grid = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };
    int result = numIslands(grid);
    cout << result << endl;
}