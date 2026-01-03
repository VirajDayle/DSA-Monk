#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    unordered_map<int, int> scan;
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = target - nums[i];
        if (scan.find(sum) != scan.end() && scan[sum] != i)
        {
            return {i, scan[sum]};
        }
        scan[nums[i]] = i; 
    };
    return {};
};

int main()
{
    vector<int> arr = {2, 11, 15, 7};
    int target = 9;
    vector<int> ans = twoSum(arr, target);
    for (int i : ans)
    {
        cout << i << " ";
    }
}