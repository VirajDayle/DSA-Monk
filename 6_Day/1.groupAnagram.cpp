#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    map<array<int, 26>, vector<string>> mp;

    for (string s : strs)
    {
        array<int, 26> freq{0};
        for (char c : s)
        {
            freq[c - 'a']++;
        }
        mp[freq].push_back(s);
    }

    vector<vector<string>> ans;
    for (auto &it : mp)
    {
        ans.push_back(it.second);
    }
    return ans;
}

int main()
{
    vector<string> s = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans = groupAnagrams(s);
    for (vector<string> s : ans)
    {
        for (string i : s)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}