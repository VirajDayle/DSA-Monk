#include <bits/stdc++.h>
using namespace std;

int getMin(const vector<int> &arr)
{
    int x = INT_MAX;
    for(int a : arr) x = min(x,a);
    return x;
}

int main()
{
    const vector<int> arr = {9, 5, 21, 45, 32};
    cout << getMin(arr);
}