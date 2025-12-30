#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &num, int Ostart, int Istart, bool swaping)
{
    if (Ostart <= 0)
        return;

    if (Istart == Ostart)
    {
        if (!swaping)
        {
            return;
        }
        bubbleSort(num, Ostart - 1, 0, true);
    }
    else
    {
        if (num[Istart] > num[Istart + 1])
        {
            swap(num[Istart], num[Istart + 1]);
            swaping = true;
        }
        bubbleSort(num, Ostart, Istart + 1, swaping);
    }
}

int main()
{
    vector<int> arr = {9, 5, 21, 45, 32, 67, 96, 12};
    int n = arr.size();
    bubbleSort(arr, n - 1, 0, false);
    for (int x : arr)
        cout << x << " ";
}