#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums, int low, int mid, int high)
{
    vector<int> temp;
    int i = low, j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (nums[i] <= nums[j])
            temp.push_back(nums[i++]);
        else
            temp.push_back(nums[j++]);
    }

    while (i <= mid)
        temp.push_back(nums[i++]);
    while (j <= high)
        temp.push_back(nums[j++]);

    for (int k = 0; k < temp.size(); k++)
    {
        nums[low + k] = temp[k];
    }
}

void mergeSort(vector<int> &nums, int low, int high)
{
    if (low >= high)
        return;
    int mid = low + (high - low) / 2;
    mergeSort(nums, low, mid);
    mergeSort(nums, mid + 1, high);
    merge(nums, low, mid, high);
}

vector<int> sortArray(vector<int> &nums)
{
    int n = nums.size();
    mergeSort(nums,0,n-1);
    return nums;
}

int main()
{
    vector<int> arr = {3, 4, 2, 78, 3, 7};
    vector<int> ans = sortArray(arr);
    for (int i : ans)
    {
        cout << i << " ";
    }
}