#include <bits/stdc++.h>
using namespace std;

void sortt(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;

    int first = low;
    int pivot = arr[first];
    int l = low + 1;
    int h = high;

    while (l < h)
    {
        while (arr[l] <= pivot)
            l++;
        while (arr[h] > pivot)
            h--;

        if (l < h)
        {
            swap(arr[l], arr[h]);
        }
    }
    swap(arr[first], arr[h]);

    sortt(arr, low, h - 1);
    sortt(arr, h + 1, high);
}

int main()
{
    vector<int> arr = {12, 15, 6, 9, 19, 4, 54, 8};
    sortt(arr, 0, arr.size() - 1);
    for (int x : arr)
    {
        cout << x << " ";
    }
}