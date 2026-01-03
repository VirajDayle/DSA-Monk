#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    int n = nums.size();
    unordered_set<int> s;
    for (int i : nums)
    {
        if (s.find(i) != s.end())
        {
            return true;
        }
        s.insert(i);
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 4, 5, 4};
    cout << containsDuplicate(arr);
}