#include <bits/stdc++.h>
using namespace std;

bool isMine(const vector<vector<char>>& board, int x, int y) {
    return board[x][y] == '*';
}

int countMines(const vector<vector<char>>& board, int x, int y, int m, int n) {
    int count = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            int nx = x + i;
            int ny = y + j;
            if (nx >= 0 && nx < m && ny >= 0 && ny < n && isMine(board, nx, ny)) {
                count++;
            }
        }
    }
    return count;
}

void printBoard(vector<vector<char>>& revealBoard) {
    for (auto& row : revealBoard) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

void revealBoard(const vector<vector<char>>& board, int m, int n) {
    vector<vector<char>> revealedBoard(m, vector<char>(n, '0'));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!isMine(board, i, j)) {
                revealedBoard[i][j] = countMines(board, i, j, m, n) + '0';
            } else {
                revealedBoard[i][j] = '*';
            }
        }
    }
    printBoard(revealedBoard);
}

int main() {
    int m, n;
    cout << "nhap so dong va so cot: ";
    cin >> m >> n;
    vector<vector<char>> board(m, vector<char>(n));
    cout << "nhap ban do min: ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }
    cout << "ban do min: " << endl;
    revealBoard(board, m, n);
    return 0;
}
