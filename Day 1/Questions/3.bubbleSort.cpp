#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    return;
}

int main()
{
    vector<int> arr = {9, 5, 21, 45, 32};
    bubbleSort(arr);
    for (int x : arr)
        cout << x << " ";
}