#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    int longest = 1;
    unordered_set<int> ars(nums.begin(), nums.end());
    for (int i : ars)
    {
        if (ars.find(i - 1) == ars.end())
        {
            int count = 1;
            while (ars.find(i + count) != ars.end())
            {
                count++;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}

int main()
{
    vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    cout << longestConsecutive(nums);
}