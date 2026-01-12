#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> mpp;

    for (int num : nums)
    {
        mpp[num]++;
    }

    vector<int> res;
    for (auto &pair : mpp)
    {
        if (pair.second > n / 3)
        {
            res.push_back(pair.first);
        }
    }
    return res;
}

int main()
{
    vector<int> arr = {3, 2, 3};
    vector<int> ans = majorityElement(arr);
    for (int a : ans)
    {
        cout << a;
    }
}