#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    int prefixSum = 0, res = 0;
    unordered_map<int, int> mpp;
    mpp[0] = 1;

    for (int n : nums)
    {
        prefixSum += n;
        int diff = prefixSum - k;
        res += mpp[diff];
        mpp[prefixSum]++;
    }
    return res;
}

int main()
{
    vector<int> arr = {10, 2, -2, -20, 10};
    int k = -10;
    cout << subarraySum(arr, k);
}