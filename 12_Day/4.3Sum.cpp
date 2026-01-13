#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int>> ans;

    for (int i = 0; i < n - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int l = i + 1;
        int r = n - 1;

        while (l < r)
        {
            int sum = nums[i] + nums[l] + nums[r];
            if (sum == 0)
            {
                ans.push_back({nums[i], nums[l], nums[r]});

                while (l < r && nums[l] == nums[l + 1])
                    l++;
                while (l < r && nums[r] == nums[r - 1])
                    r--;
                    
                l++;
                r--;
            }
            else if (sum < 0)
            {
                l++;
            }
            else
            {
                r--;
            };
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(arr);
    for (vector<int> &x : ans)
    {
        for (int y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}