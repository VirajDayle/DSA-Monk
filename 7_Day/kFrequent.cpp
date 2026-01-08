#include <bits/stdc++.h>
using namespace std;
vector<int> topKFrequent(vector<int> &nums, int k)
{
    int n = nums.size();
    unordered_map<int, int> mpp;
    vector<vector<int>> freq(n + 1);

    for (int k : nums)
    {
        mpp[k]++;
    }

    for (const auto &entry : mpp)
    {
        freq[entry.second].push_back(entry.first);
    }

    vector<int> ans;
    for (int i = n; i > 0; i--)
    {
        for (int n : freq[i])
        {
            ans.push_back(n);
            if (ans.size() == k)
                return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 1, 2, 1, 2, 3, 1, 3, 2, 4, 4, 4, 3, 4};
    int k = 2;
    vector<int> ans = topKFrequent(arr, k);
    for (int num : ans)
    {
        cout << num;
    }
}