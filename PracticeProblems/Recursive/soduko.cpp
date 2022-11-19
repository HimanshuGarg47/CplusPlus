#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solveSudoku(vector<vector<char>> &board)
    {

        solve(board);
    }

    bool isValid(vector<vector<char>> &board, int &row, int &col, char num)
    {
        for (int i = 0; i < 9; i++)
        {
            if (board[row][i] == num)
                return false;

            if (board[i][col] == num)
                return false;

            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == num)
                return false;
        }

        return true;
    }

    bool solve(vector<vector<char>> &board)
    {
        for (int r = 0; r < board.size(); r++)
        {
            for (int c = 0; c < board[0].size(); c++)
            {
                if (board[r][c] == '.')
                {

                    for (char num = '1'; num <= '9'; num++)
                    {
                        if (isValid(board, r, c, num))
                        {

                            board[r][c] = num;

                            if (solve(board))
                                return true;
                            else
                                board[r][c] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
};
int main()
{
}