#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int i = 0, j = numbers.size() - 1;
    while (i < j)
    {
        int sum = numbers[i] + numbers[j];
        if (sum == target)
        {
            return {i + 1, j + 1};
        }
        else if (sum > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return {};
}

int main()
{
    vector<int> arr = {2, 3, 4};
    int target = 6;
    vector<int> ans = twoSum(arr, target);
    for (int i : ans)
        cout << i;
}