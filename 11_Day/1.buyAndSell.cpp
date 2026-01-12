#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int minPrice = INT_MAX;
    int profit = 0;

    for (int p : prices)
    {
        minPrice = min(minPrice, p);
        profit = max(profit, p - minPrice);
    }
    return profit;
}

int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(arr);
}