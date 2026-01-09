#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> res(n, 1);

    for (int i = 1; i < n; i++)
    {
        res[i] = res[i - 1] * nums[i - 1];
    };

    int postfix = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        res[i] *= postfix;
        postfix *= nums[i];
    }
    return res;
}

int main()
{
    vector<int> arr = {-1, 1, 0, -3, 3};
    vector<int> ans = productExceptSelf(arr);
    for (int x : ans)
    {
        cout << x << " ";
    }
}