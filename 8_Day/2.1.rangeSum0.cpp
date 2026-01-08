#include <bits/stdc++.h>
using namespace std;

class NumMatrix
{
    vector<vector<int>> prefixSum;

public:
    NumMatrix(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        prefixSum = vector<vector<int>>(n, vector<int>(m, 0));
        for (int row = 0; row < n; row++)
        {
            prefixSum[row][0] = matrix[row][0];
            for (int col = 1; col < m; col++)
            {
                prefixSum[row][col] = prefixSum[row][col - 1] + matrix[row][col];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {
        int res = 0;
        for (int row = row1; row <= row2; row++)
        {
            if (col1 > 0)
            {
                res += prefixSum[row][col2] - prefixSum[row][col1 - 1];
            }
            else
            {
                res += prefixSum[row][col2];
            }
        }
        return res;
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
