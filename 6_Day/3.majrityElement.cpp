#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int element = nums[0];
    int count = 0;

    for (int i : nums)
    {
        if (i == element)
            count++;
        else
            count--;
        if(count == 0){
            count = 1;
            element = i;
        }
    }

    return element;
}

int main()
{
    vector<int> arr = {3,2,3};
    cout << majorityElement(arr);
}