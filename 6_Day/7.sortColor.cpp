#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int i = 0, j = 0, k = nums.size() - 1;
    while (j <= k)
    {
        if (nums[j] > 1)
        {
            swap(nums[j], nums[k--]);
        }
        else if (nums[j] < 1)
        {
            swap(nums[j++], nums[i++]);
        }
        else
        {
            j++;
        }
    }
}

int main()
{
    vector<int> arr = {2, 0, 2, 1, 1, 0};
    sortColors(arr);
    for (int i : arr)
    {
        cout << i << " ";
    }
}