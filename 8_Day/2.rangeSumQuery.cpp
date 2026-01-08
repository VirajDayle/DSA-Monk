#include <bits/stdc++.h>
using namespace std;

class NumMatrix
{
    vector<vector<int>> matr;

public:
    NumMatrix(vector<vector<int>> &matrix)
    {
        matr = matrix;
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {
        int sum = 0;
        for (int i = row1; i <= row2; i++)
        {
            for (int j = col1; j <= col2; j++)
            {
                sum += matr[i][j];
            }
        }
        return sum;
    }
};

int main()
{
    vector<vector<int>> matrix = {
        {3, 0, 1, 4, 2},
        {5, 6, 3, 2, 1},
        {1, 2, 0, 1, 5},
        {4, 1, 0, 1, 7},
        {1, 0, 3, 0, 5}};

    NumMatrix mat(matrix);
    int ans = mat.sumRegion(2, 1, 4, 3);
    cout << ans;
}
