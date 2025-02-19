#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long int
#define sp ' '
#define py cout << "YES" << '\n';
#define pn cout << "NO" << '\n';
#define nl cout << '\n'
#define pb push_back
using namespace std;

bool isValid(vector<string> &board, int row, int col, int n)
{
    // Check the column
    for (int i = 0; i < row; ++i)
    {
        if (board[i][col] == 'Q')
            return false;
    }

    // Check the upper left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    // Check the upper right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    return true;
}

void solveNQueensHelper(int n, int row, vector<string> &board,
                        vector<vector<string>> &result)
{
    if (row == n)
    {
        result.push_back(board);
        return;
    }

    for (int col = 0; col < n; ++col)
    {
        if (isValid(board, row, col, n))
        {
            board[row][col] = 'Q';
            solveNQueensHelper(n, row + 1, board, result);
            board[row][col] = '.'; // Backtrack
        }
    }
}

vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> result;
    vector<string> board(n, string(n, '.')); // Initialize an empty board
    solveNQueensHelper(n, 0, board, result);
    return result;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        // solve();
        return 0;
}