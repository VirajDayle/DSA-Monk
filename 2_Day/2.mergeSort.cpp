#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start1, int end1, int start2, int end2)
{
    vector<int> temp;
    int i = start1, j = start2;
    while (i <= end1 && j <= end2)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= end1)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end2)
    {
        temp.push_back(arr[j]);
        j++;
    }

    int k = 0;
    for (int idx = start1; idx <= end2; idx++){
        arr[idx] = temp[k++];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, mid + 1, high);
    return;
}

int main()
{
    vector<int> arr = {456, 2, 12, 43, 3, 5, 78};
    int n = arr.size();
    mergeSort(arr, 0, n - 1);
    for (int x : arr)
        cout << x << " ";
}