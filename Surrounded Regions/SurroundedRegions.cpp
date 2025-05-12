#include <bits/stdc++.h>

using namespace std;

void dfs(vector<vector<char>>& board, int x, int y) {
    int rows = board.size();
    int cols = board[0].size();

    if(x < 0 || y < 0 || x >= rows || y >= cols || board[x][y] != 'O') return;

    board[x][y] = '-';

    dfs(board, x + 1, y);
    dfs(board, x - 1, y);
    dfs(board, x, y + 1);
    dfs(board, x, y - 1);
}
void solve(vector<vector<char>>& board) {
    if(board.empty() || board[0].empty()) return;
 
    int rows = board.size();
    int cols = board[0].size();

    for(int j = 0; j < cols; j++) {
        dfs(board, 0, j);           
        dfs(board, rows - 1, j);    
    }
    
    for(int i = 0; i < rows; i++) {
        dfs(board, i, 0);           
        dfs(board, i, cols - 1);    
    }
    

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(board[i][j] == '-') {
                board[i][j] = 'O';
            } else if(board[i][j] == 'O') {
                board[i][j] = 'X';

            }
        }
    }
}

int main() {
    vector<vector<char>> board = {
        {'X', 'X', 'X', 'X'},
        {'X', 'O', 'O', 'X'},
        {'X', 'X', 'O', 'X'},
        {'X', 'O', 'X', 'X'}
    };

    cout << "Board truoc khi xu ly:\n";
    for (const auto& row : board) {
        for (char c : row) cout << c << ' ';
        cout << '\n';
    }

    solve(board);

    cout << "\nBoard sau khi xu ly:\n";
    for (const auto& row : board) {
        for (char c : row) cout << c << ' ';
        cout << '\n';
    }

    return 0;
}