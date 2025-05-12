#include <bits/stdc++.h>

using namespace std;

void dfs(vector<vector<char>>& grid, int x, int y) {
    int rows = grid.size();
    int cols = grid[0].size();

    if((x < 0) || (y < 0) || (x >= rows) || (y >= cols) || grid[x][y] != '1') {
        return;
    }

    grid[x][y] = '0';

    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};

    for(int i = 0; i < 4; ++i) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        dfs(grid, newX, newY);
    }
}

int numIslands(vector<vector<char>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;

    for(int row = 0; row < rows; row++) {
        for(int col = 0; col < cols; col++) {
            if(grid[row][col] == '1') {
                count++;
                dfs(grid, row, col);
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