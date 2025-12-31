#include <bits/stdc++.h>
using namespace std;

void insertion(vector<int> &arr, int j, int key)
{
    if (j < 0 || arr[j] <= key)
    {
        arr[j + 1] = key;
        return;
    }


    arr[j + 1] = arr[j];

    insertion(arr, j - 1, key);
}

void insertionSort(vector<int> &arr, int n, int i)
{
    if (i == n)
        return;

    int key = arr[i];
    insertion(arr, i - 1, key);

    insertionSort(arr, n, i + 1);
}

int main()
{
    vector<int> arr = {3, 2, 12, 43, 3, 5, 78};
    int n = arr.size();
    insertionSort(arr, n, 1);
    for (int x : arr)
        cout << x << " ";
}
