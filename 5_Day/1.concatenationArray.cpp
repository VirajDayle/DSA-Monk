#include <bits/stdc++.h>
using namespace std;

vector<int> getConcatenation(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n*2);
    for (int i = 0; i < n; i++)
    {
        ans[i] = nums[i];
        ans[i+n] = nums[i];
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> ans = getConcatenation(arr);
    cout<<ans.size();
    for (int x : ans)
    {
        cout << x << " ";
    }
}