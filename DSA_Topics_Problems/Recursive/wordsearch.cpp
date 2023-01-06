/* https://leetcode.com/problems/word-search/ */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool exist(vector<vector<char>> &board, string word)
    {
        return backtrack(board, "", word, 0, 0);
    }

    bool backtrack(vector<vector<char>> &board, string p, string word, int r, int c)
    {

        if (word.empty())
        {
            cout << p << endl;
            return true;
        }

        char ch = word[0];
        bool left, up, right, down;

        if (board[r][c] == ch)
        {
            if (c > 0) // go in left direction
            {
                            board[r][c] = '@';

                left = backtrack(board, p + ch, word.substr(1), r, c - 1);
                board[r][c] = ch;
            }
            if (r > 0) // go in up direction
            {
                board[r][c] = '@';

                up = backtrack(board, p + ch, word.substr(1), r - 1, c);
                board[r][c] = ch;

            }
            if (c < board[0].size() - 1) // go in right dir
            {
                board[r][c] = '@';

                right = backtrack(board, p + ch, word.substr(1), r, c + 1);
                 board[r][c] = ch;

            }
            if (r < board.size() - 1) // go in down direction
            {
                board[r][c] = '@';
                down = backtrack(board, p + ch, word.substr(1), r + 1, c);
                 board[r][c] = ch;

            }
            // if(!up && !down && !right && !left)
            // return false;
        }
       else return;
    }
};

int main()
{
    vector<vector<char>> board = {{'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'L', 'E'}};
    string word = "ABCCED";
    Solution sol;
    cout << sol.exist(board, word);
}