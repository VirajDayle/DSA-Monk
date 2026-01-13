#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
            nums1[k--] = nums1[i--];
        else
            nums1[k--] = nums2[j--];
    }
    while (j >= 0)
    {
        nums1[k--] = nums2[j--];
    }
};

int main()
{
    vector<int> nums1 = {10, 20, 20, 40, 0, 0};
    int m = 4;
    vector<int> nums2 = {1, 2};
    int n = 2;
    merge(nums1, m, nums2, n);
    for (int x : nums1)
    {
        cout << x << " ";
    }
}