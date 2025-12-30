#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
    return;
}

int main()
{
    vector<int> arr = {3, 2, 12, 43, 3, 5, 78};
    insertionSort(arr);
    for (int x : arr)
        cout << x <<" ";
}