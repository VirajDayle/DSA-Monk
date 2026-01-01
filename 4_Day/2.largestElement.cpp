#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr)
{
    int n = arr.size();
    int largestElement = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largestElement)
        {
            largestElement = arr[i];
        }
    }
    return largestElement;
}

int main()
{
    vector<int> arr = {32, 13, 43, 56, 444, 65, 2};
    cout << largest(arr);
}