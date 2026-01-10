#include <bits/stdc++.h>
using namespace std;

bool isValidSudoku(vector<vector<char>> &board)
{
    bool rows[9][9] = {false};
    bool cols[9][9] = {false};
    bool boxes[9][9] = {false};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] != '.')
            {
                int num = board[i][j] - '1';
                int boxIndex = (i / 3) * 3 + (j / 3);
                if (rows[i][num] || cols[j][num] || boxes[boxIndex][num])
                    return false;
                rows[i][num] = cols[j][num] = boxes[boxIndex][num] = true;
            }
        }
    }
    return true;
}

bool isValidSudoku(vector<vector<char>> &board)
{
    unordered_map<char, vector<set<int>>> checkMap;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            char ch = board[i][j];

            if (ch == '.')
                continue;
            int box = (i / 3) * 3 + (j / 3);
            checkMap.try_emplace(ch, 3);
            if (checkMap[ch][0].count(i) || checkMap[ch][1].count(j) || checkMap[ch][2].count(box))
            {
                return false;
            }
            checkMap[ch][0].insert(i);
            checkMap[ch][1].insert(j);
            checkMap[ch][2].insert(box);
        }
    }
    return true;
}

int main()
{
    vector<vector<char>> board = {
        {'8', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    cout << isValidSudoku(board);
}