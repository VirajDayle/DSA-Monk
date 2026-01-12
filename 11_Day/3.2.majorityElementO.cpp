#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int ele1 = -1, ele2 = -1;
    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == ele1)
        {
            cnt1++;
        }
        else if (nums[i] == ele2)
        {
            cnt2++;
        }
        else if (cnt1 == 0)
        {
            ele1 = nums[i];
            cnt1 = 1;
        }
        else if (cnt2 == 0)
        {
            ele2 = nums[i];
            cnt2 = 1;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }

    cnt1 = cnt2 = 0;
    for (int num : nums)
    {
        if (ele1 == num)
            cnt1++;
        else if (ele2 == num)
            cnt2++;
    }

    vector<int> res;
    if (cnt1 > n / 3)
        res.push_back(ele1);
    if (cnt2 > n / 3)
        res.push_back(ele2);
    return res;
}

int main()
{
    vector<int> arr = {3, 2, 3};
    vector<int> ans = majorityElement(arr);
    for (int x : ans)
    {
        cout << x;
    }
}