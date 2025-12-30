#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            };
        };
        swap(arr[i],arr[index]);
    }
    return;
}

int main()
{
    vector<int> arr = {3, 2, 12, 43, 3, 5, 78};
    selectionSort(arr);
    for (int x : arr)
        cout << x <<" ";
}