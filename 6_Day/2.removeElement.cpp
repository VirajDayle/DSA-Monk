#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int n = nums.size();
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (nums[i] != val)
        {
            i++;
        }
        else
        {
            swap(nums[i],nums[j]);
            j--;
        }
    }
    return i;
}

int main(){
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    cout<<removeElement(nums,val);
    for(int i : nums){
        cout<<i<<" ";
    }
}