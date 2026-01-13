#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int k = 1, i = 1, ele = nums[0];

    for (int i = 1; i < nums.size(); i++){
        if(nums[i] != ele){
            nums[k] = nums[i];
            ele = nums[i];
            k++;
        }
    }
    return k;
}

int main()
{
    vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = removeDuplicates(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
